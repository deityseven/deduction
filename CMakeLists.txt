#cmake最低版本要求
cmake_minimum_required(VERSION 3.0.0)

#项目名称
project(deduction)

#启用颜色输出
set(CMAKE_COLOR_MAKEFILE ON)

#指定编译字符集
if(WIN32)
add_compile_options(/utf-8)
endif(WIN32)

#enable project folders
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

#C++标准 
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#设置RelWithDebInfo模式，禁用优化
if(WIN32)
set(CMAKE_C_FLAGS_RELWITHDEBINFO "/MD /Zi /Od /Ob1 /DNDEBUG")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "/MD /Zi /Od /Ob1 /DNDEBUG")
endif(WIN32)

#包含导出头文件模块
include(GenerateExportHeader)

#输出目录
set(output_dir ${CMAKE_BINARY_DIR}/output)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${output_dir}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${output_dir}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${output_dir}/bin)

##################################################
#添加源码目录
#src 
add_subdirectory(src)
add_subdirectory(external/eigen-3.4.0)
