cmake_minimum_required(VERSION 3.16)

project(Portafolio_C_mas_mas LANGUAGES CXX)

# -----------------------------------------------------------------------------
# Global settings
# -----------------------------------------------------------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# -----------------------------------------------------------------------------
# Source discovery (keeps folder hierarchy for IDEs)
# -----------------------------------------------------------------------------
file(GLOB_RECURSE PORTAFOLIO_ALL_CPP CONFIGURE_DEPENDS
  "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

file(GLOB_RECURSE PORTAFOLIO_ALL_HEADERS CONFIGURE_DEPENDS
  "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h"
  "${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp"
  "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h"
  "${CMAKE_CURRENT_SOURCE_DIR}/src/*.hpp"
)

# -----------------------------------------------------------------------------
# Detect a .cpp that contains `int main(...)`
# Note: this repository contains many standalone exercises (multiple mains).
# We require the user to pick one when multiple candidates exist.
# -----------------------------------------------------------------------------
function(portafolio_file_defines_main in_file out_var)
  if(NOT EXISTS "${in_file}")
    set(${out_var} OFF PARENT_SCOPE)
    return()
  endif()

  file(READ "${in_file}" _content)

  # Match the common signature used in this repo (mirrors menu.sh behavior).
  # It intentionally avoids matching commented-out code in most cases.
  if(_content MATCHES "(^|\n)[ \t]*int[ \t]+main[ \t]*\\(")
    set(${out_var} ON PARENT_SCOPE)
  else()
    set(${out_var} OFF PARENT_SCOPE)
  endif()
endfunction()

set(PORTAFOLIO_MAIN_SOURCE "" CACHE STRING
  "Path (relative to repo root) to the exercise .cpp that contains main(), e.g. src/Nivel1_.../N1_01_HolaMundo.cpp"
)

set(PORTAFOLIO_MAIN_CANDIDATES "")
foreach(_cpp IN LISTS PORTAFOLIO_ALL_CPP)
  portafolio_file_defines_main("${_cpp}" _has_main)
  if(_has_main)
    list(APPEND PORTAFOLIO_MAIN_CANDIDATES "${_cpp}")
  endif()
endforeach()

if(PORTAFOLIO_MAIN_SOURCE)
  # Allow relative paths from the project root.
  if(IS_ABSOLUTE "${PORTAFOLIO_MAIN_SOURCE}")
    set(_main_abs "${PORTAFOLIO_MAIN_SOURCE}")
  else()
    set(_main_abs "${CMAKE_CURRENT_SOURCE_DIR}/${PORTAFOLIO_MAIN_SOURCE}")
  endif()

  if(NOT EXISTS "${_main_abs}")
    message(FATAL_ERROR "PORTAFOLIO_MAIN_SOURCE points to a non-existing file: ${PORTAFOLIO_MAIN_SOURCE}")
  endif()

  portafolio_file_defines_main("${_main_abs}" _has_main)
  if(NOT _has_main)
    message(FATAL_ERROR "PORTAFOLIO_MAIN_SOURCE does not seem to define int main(...): ${PORTAFOLIO_MAIN_SOURCE}")
  endif()

  set(PORTAFOLIO_SELECTED_MAIN "${_main_abs}")
else()
  list(LENGTH PORTAFOLIO_MAIN_CANDIDATES _main_count)

  if(_main_count EQUAL 0)
    message(FATAL_ERROR "No executable exercises found (no .cpp defines int main(...)).")
  elseif(_main_count EQUAL 1)
    list(GET PORTAFOLIO_MAIN_CANDIDATES 0 PORTAFOLIO_SELECTED_MAIN)
  else()
    # Build a friendly list of relative paths.
    set(_candidates_rel "")
    foreach(_c IN LISTS PORTAFOLIO_MAIN_CANDIDATES)
      file(RELATIVE_PATH _rel "${CMAKE_CURRENT_SOURCE_DIR}" "${_c}")
      list(APPEND _candidates_rel "${_rel}")
    endforeach()
    list(SORT _candidates_rel)
    string(JOIN "\n  - " _candidates_pretty ${_candidates_rel})

    message(FATAL_ERROR
      "Multiple exercises contain main().\n"
      "Select one with -DPORTAFOLIO_MAIN_SOURCE=<path>.\n\n"
      "Candidates:\n  - ${_candidates_pretty}\n"
    )
  endif()
endif()

# -----------------------------------------------------------------------------
# Replicate menu.sh behavior:
# - Build the selected main
# - Also compile any other .cpp in the same folder that do NOT define main()
#   (avoids multiple-main link errors while still compiling local dependencies).
# -----------------------------------------------------------------------------
get_filename_component(PORTAFOLIO_MAIN_DIR "${PORTAFOLIO_SELECTED_MAIN}" DIRECTORY)

file(GLOB PORTAFOLIO_SAME_DIR_CPP CONFIGURE_DEPENDS
  "${PORTAFOLIO_MAIN_DIR}/*.cpp"
)

set(PORTAFOLIO_SELECTED_SOURCES "${PORTAFOLIO_SELECTED_MAIN}")
foreach(_cpp IN LISTS PORTAFOLIO_SAME_DIR_CPP)
  if(_cpp STREQUAL "${PORTAFOLIO_SELECTED_MAIN}")
    continue()
  endif()

  portafolio_file_defines_main("${_cpp}" _has_main)
  if(NOT _has_main)
    list(APPEND PORTAFOLIO_SELECTED_SOURCES "${_cpp}")
  endif()
endforeach()

# -----------------------------------------------------------------------------
# Target
# -----------------------------------------------------------------------------
add_executable(${PROJECT_NAME}
  ${PORTAFOLIO_SELECTED_SOURCES}
  ${PORTAFOLIO_ALL_HEADERS}
)

target_include_directories(${PROJECT_NAME} PRIVATE
  "${CMAKE_CURRENT_SOURCE_DIR}/include"
  "${CMAKE_CURRENT_SOURCE_DIR}/src"
)

# Warnings
target_compile_options(${PROJECT_NAME} PRIVATE
  $<$<CXX_COMPILER_ID:GNU,Clang,AppleClang>:-Wall;-Wextra>
  $<$<CXX_COMPILER_ID:MSVC>:/W4>
)

# Optional dependency: Threads (needed for std::thread on some toolchains)
set(_needs_threads OFF)
foreach(_f IN LISTS PORTAFOLIO_SELECTED_SOURCES)
  file(READ "${_f}" _c)
  if(_c MATCHES "#include[ \t]*<[ \t]*thread[ \t]*>" OR _c MATCHES "\\bstd::thread\\b")
    set(_needs_threads ON)
    break()
  endif()
endforeach()

if(_needs_threads)
  find_package(Threads REQUIRED)
  target_link_libraries(${PROJECT_NAME} PRIVATE Threads::Threads)
endif()

# Keep folder hierarchy in IDEs (VS / Xcode / some generators)
if(PORTAFOLIO_ALL_HEADERS)
  source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${PORTAFOLIO_ALL_HEADERS})
endif()
if(PORTAFOLIO_ALL_CPP)
  source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${PORTAFOLIO_ALL_CPP})
endif()

# Helpful status
file(RELATIVE_PATH _main_rel "${CMAKE_CURRENT_SOURCE_DIR}" "${PORTAFOLIO_SELECTED_MAIN}")
message(STATUS "Selected main: ${_main_rel}")
message(STATUS "Sources (compiled): ${PORTAFOLIO_SELECTED_SOURCES}")
