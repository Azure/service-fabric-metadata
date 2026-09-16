# ------------------------------------------------------------
# Copyright (c) Microsoft Corporation.  All rights reserved.
# Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
# ------------------------------------------------------------

cmake_minimum_required(VERSION 3.14)

project(fabric-metadata LANGUAGES)

set(fabric_metadata_MAIN_PROJECT OFF)
if (CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
    set(fabric_metadata_MAIN_PROJECT ON)
endif()

# include code generation and file fetch
# user of this project can skip these steps
if(fabric_metadata_MAIN_PROJECT)
  include(cmake/fetch_get_files.cmake)
  include(cmake/fetch_get_internal_files.cmake)
endif()

if(fabric_metadata_MAIN_PROJECT)
  find_program (
      pwsh_exe
      NAMES pwsh.exe pwsh
      REQUIRED
  )
  find_program (
      cargo_exe
      NAMES cargo.exe cargo
      REQUIRED
  )
  find_program (
      git_exe
      NAMES git.exe git
      REQUIRED
  )

  set(_out_winmd_path
    ${CMAKE_CURRENT_SOURCE_DIR}/.windows/winmd/Windows.ServiceFabric.winmd
  )

  file(GLOB_RECURSE _metadata_inputs CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/idl/*.idl
    ${CMAKE_CURRENT_SOURCE_DIR}/internal_idl/*.idl
    ${CMAKE_CURRENT_SOURCE_DIR}/rust-metadata/app/*.rs
    ${CMAKE_CURRENT_SOURCE_DIR}/rust-metadata/seed/*.rdl
    ${CMAKE_CURRENT_SOURCE_DIR}/rust-metadata/tests/*.ps1
    ${CMAKE_CURRENT_SOURCE_DIR}/rust-metadata/tests/*.rs
  )
  list(APPEND _metadata_inputs
    ${CMAKE_CURRENT_SOURCE_DIR}/Cargo.toml
    ${CMAKE_CURRENT_SOURCE_DIR}/Cargo.lock
    ${CMAKE_CURRENT_SOURCE_DIR}/rust-metadata/Cargo.toml
    ${CMAKE_CURRENT_SOURCE_DIR}/rust-metadata/run.ps1
  )

  add_custom_command(
    OUTPUT ${_out_winmd_path}
    COMMAND ${pwsh_exe} -NoProfile -File ${CMAKE_CURRENT_SOURCE_DIR}/rust-metadata/run.ps1
    DEPENDS ${_metadata_inputs}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    VERBATIM
  )

  add_custom_target(generate_winmd
    DEPENDS ${_out_winmd_path}
  )

  add_custom_target(force_clean
    COMMAND ${CMAKE_COMMAND} -E rm -rf .windows target rust-metadata/target
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  )

  add_custom_target(validate_winmd
    COMMAND ${pwsh_exe} -NoProfile -File ${CMAKE_CURRENT_SOURCE_DIR}/rust-metadata/run.ps1
    COMMAND ${cargo_exe} test --workspace --locked
    COMMAND ${git_exe} --no-pager diff --exit-code HEAD -- .windows/winmd/Windows.ServiceFabric.winmd
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    VERBATIM
  )
endif()