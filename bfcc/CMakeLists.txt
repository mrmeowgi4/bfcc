add_executable (bfcc "bfcc.c" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET bfcc PROPERTY CXX_STANDARD 20)
endif()
