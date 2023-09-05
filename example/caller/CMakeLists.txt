set(SRC_LIST calluserservice.cc ../user.pb.cc ../../src/wrpcchannel.cc)
add_executable(consumer ${SRC_LIST})

target_link_libraries(consumer wrpc protobuf)