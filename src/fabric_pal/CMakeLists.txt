file(GLOB SOURCES
  include/*.h
  src/*.c
)

add_library(fabric_pal INTERFACE
    #${SOURCES}
)

target_include_directories(fabric_pal
  INTERFACE include
)
