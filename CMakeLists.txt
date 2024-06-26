#cmake最低版本要求
cmake_minimum_required(VERSION 3.0.0)

#项目名称
project(deduction)

#设置搜索路径
if(WIN32)
set(CMAKE_PREFIX_PATH D:/Qt/Qt5.12.4/5.12.4/msvc2017_64)
endif(WIN32)
if(UNIX)
set(CMAKE_PREFIX_PATH /opt/Qt5.12.4/5.12.4/gcc_64)
endif(UNIX)

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

######################################
#Qt 目录
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Sql REQUIRED)
#find_package(Qt5Charts REQUIRED)
find_package(Qt5Xml REQUIRED)
find_package(Qt5PrintSupport REQUIRED)
#find_package(Qt5WebEngineWidgets REQUIRED)
find_package(Qt5Network REQUIRED)
find_package(Qt5OpenGL REQUIRED)
find_package(Qt5Nfc REQUIRED)
find_package(Qt5Multimedia REQUIRED)
#find_package(Qt5FontDatabaseSupport REQUIRED)
find_package(Qt5DBus REQUIRED)
find_package(Qt5Bluetooth REQUIRED)

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
add_subdirectory(external/spdlog)
