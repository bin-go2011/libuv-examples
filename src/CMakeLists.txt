add_executable(helloworld helloworld/main.c)
target_link_libraries(helloworld unofficial::libuv::libuv)

add_executable(idle-basic idle-basic/main.c)
target_link_libraries(idle-basic unofficial::libuv::libuv)