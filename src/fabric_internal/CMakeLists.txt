
file(GLOB SOURCES
  include/*.h
  src/*.c
)

add_library(fabric_internal_sdk STATIC
    ${SOURCES}
)

target_include_directories(fabric_internal_sdk
  PUBLIC include
)

if(WIN32)
  target_link_libraries(fabric_internal_sdk
    INTERFACE fabric_sdk
  )
else()
  target_link_libraries(fabric_internal_sdk
    INTERFACE fabric_sdk
    PUBLIC fabric_pal
  )
endif()