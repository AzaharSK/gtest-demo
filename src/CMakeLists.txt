add_library(Factorial)

target_sources(Factorial
  PRIVATE
    Factorial.cpp
  PUBLIC
    Factorial.hpp
  )

target_include_directories(Factorial
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

# we use this to get code coverage
# flags are only valid with the GNU compiler and on Linux
if(CMAKE_CXX_COMPILER_ID MATCHES GNU AND CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux")
  target_compile_options(Factorial
    PUBLIC
      "--coverage"
    )
  target_link_options(Factorial
    INTERFACE
      "--coverage"
    )
endif()
