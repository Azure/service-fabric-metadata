cmake_minimum_required(VERSION 3.14)

project(fabric-metadata LANGUAGES C CXX)

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
  # generate winmd. defer generation task in .metadata csproj.
  find_program (
      dotnet_exe
      NAMES dotnet.exe
      REQUIRED
  )
  set(_out_winmds
    Microsoft.ServiceFabric.winmd
    Windows.Win32.winmd
  )
  set(_out_winmd_paths "")
  foreach(_out_winmd ${_out_winmds})
  list(APPEND _out_winmd_paths ${CMAKE_CURRENT_SOURCE_DIR}/.windows/winmd/${_out_winmd})
  endforeach()

  add_custom_command(
    OUTPUT ${_out_winmd_paths}
    COMMAND ${dotnet_exe} build
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/.metadata
    VERBATIM
  )

  add_custom_target(generate_winmd
    DEPENDS ${_out_winmd_paths}
  )

  # clean all generated code
  add_custom_target(force_clean
    COMMAND ${CMAKE_COMMAND} -E rm -rf .metadata/Obj .metadata/bin .windows 
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  )

  add_custom_target(soft_clean
    COMMAND ${dotnet_exe} clean
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/.metadata
  )

  add_custom_target(validate_winmd
    COMMAND pwsh -Command "if (!(ildasm /text ${CMAKE_CURRENT_SOURCE_DIR}/.windows/winmd/Microsoft.ServiceFabric.winmd | Select-String 'IFabricClient' -Quiet)) { Write-Error 'IFabricClient not found'; exit 1 } else { Write-Host 'Found IFabricClient' }"
    # Ensures that regenerated winmd is up to date in git.
    COMMAND pwsh -File ${CMAKE_CURRENT_SOURCE_DIR}/scripts/check_winmd.ps1
    DEPENDS generate_winmd
  )
endif()