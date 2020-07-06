add_executable(helloworld helloworld/main.c)
target_link_libraries(helloworld uv)

add_executable(idle-basic idle-basic/main.c)
target_link_libraries(idle-basic uv)

add_executable(uvcat uvcat/main.c)
target_link_libraries(uvcat uv)