project(tunnel)

file(GLOB SOURCE_LIST CONFIGURE_DEPENDS *.cc)

add_executable(tunnel ${SOURCE_LIST})

set_target_properties(tunnel PROPERTIES OUTPUT_NAME kimera)

target_link_libraries(tunnel PRIVATE kimera)

install(TARGETS tunnel RUNTIME)

