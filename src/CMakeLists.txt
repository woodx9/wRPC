aux_source_directory(. SRC_LIST)
add_library(wrpc ${SRC_LIST})
target_link_libraries(wrpc muduo_net muduo_base pthread /usr/local/lib/libzookeeper_st.so)