cmake_minimum_required(VERSION 3.14)

project(fabric-metadata LANGUAGES C CXX)

set(fabric_metadata_MAIN_PROJECT OFF)
if (CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
    set(fabric_metadata_MAIN_PROJECT ON)
endif()

if(WIN32)

# include code generation and file fetch
# user of this project can skip these steps
if(fabric_metadata_MAIN_PROJECT)
  include(cmake/fetch_get_files.cmake)
  include(cmake/fetch_get_internal_files.cmake)
  # fabric headers are utf16 and clang fmt cannot format them.
  #include(cmake/clang-format.cmake)
endif()

# common lib dir
if(NOT ServiceFabric_Runtime_ROOT)
    set(ServiceFabric_Runtime_ROOT "C:\\Program Files\\Microsoft Service Fabric")
endif()

set(ServiceFabric_Runtime_BINARY_DIR "${ServiceFabric_Runtime_ROOT}\\bin\\Fabric\\Fabric.Code")

include(cmake/ImportFabric.cmake)
# add_subdirectory(src)

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

  # add fabric import libs
  set(FABRIC_LIB_NAMES
    FabricRuntime
    FabricClient
    FabricResources
    FabricServiceCommunication
    FabricTransport
  )

  foreach(_fabric_lib_name ${FABRIC_LIB_NAMES})
    add_fabric_lib(NAME ${_fabric_lib_name})
  endforeach()

  add_custom_target(generate_importlibs
    DEPENDS
    # generate all support libs. 
    FabricRuntime
    FabricClient
    FabricResources
    FabricServiceCommunication
    FabricTransport
  )

  # force generate
  add_custom_target(generate_winmd
    DEPENDS ${_out_winmd_paths}
    generate_importlibs # generator needs to scan support lib files
  )

  # generate cpp
  add_custom_target(generate_fabric_all
    DEPENDS
    generate_winmd
    generate_cpp_headers
    generate_internal_cpp_headers
    copy_fabric_internal_uuid_files
    copy_fabric_uuid_files
  )

  # clean all generated code
  add_custom_target(force_clean
    COMMAND ${CMAKE_COMMAND} -E rm -rf .metadata/Obj .metadata/bin .windows src/fabric/include src/fabric/src
    src/fabric_internal/include src/fabric_internal/src importlibs
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  )
endif(fabric_metadata_MAIN_PROJECT)

else(WIN32)

#linux support
# common lib dir
if(NOT ServiceFabric_Runtime_ROOT)
    set(ServiceFabric_Runtime_ROOT "/opt/microsoft/servicefabric/")
endif()

set(ServiceFabric_Runtime_BINARY_DIR "${ServiceFabric_Runtime_ROOT}/bin/Fabric/Fabric.Code")

include(cmake/ImportFabric.cmake)
add_subdirectory(src)
add_subdirectory(examples)

# find_program(docker_exe
#   NAMES docker
#   REQUIRED
# )
# message(STATUS "Found docker : ${docker_exe}")

# add_custom_target(build_container
#  COMMAND ${docker_exe} build -f ${CMAKE_CURRENT_SOURCE_DIR}/docker/Dockerfile -t fabric-metadata:v1 ${CMAKE_CURRENT_SOURCE_DIR}
# )

# add_custom_target(docker_run
#   COMMAND gnome-terminal -- ${docker_exe} run --name fabric-metadata -it --rm --entrypoint bash fabric-metadata:v1
#   WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
# )

endif(WIN32)