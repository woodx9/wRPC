# 设置cmake的最低版本和项目名称
cmake_minimum_required(VERSION 3.0)
project(wRPC)

# 生成debug版本，可以进行gdb调试
set(CMAKE_BUILD_TYPE "Debug")

# 设置项目可执行文件输出的路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 设置项目库文件输出的路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 设置项目编译头文件搜索路径
include_directories(${PROJECT_SOURCE_DIR}/src/include)
include_directories(${PROJECT_SOURCE_DIR}/example)


# 设置项目库文件搜索路径
link_directories(${PROJECT_SOURCE_DIR}/lib)


add_subdirectory(src)
add_subdirectory(example)