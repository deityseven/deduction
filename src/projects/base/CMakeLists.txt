project(base)

#C++标准 
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(RV_SRC
    bigdao.h
    bigdao.cpp
    real.h
    real.cpp
    virtual.h
    virtual.cpp
    intertwine.h
    intertwine.cpp
)

set(SRCS
	${RV_SRC}
)

#筛选显示
source_group(rv FILES ${RV_SRC})

#包含目录
include_directories(${CMAKE_CURRENT_BINARY_DIR}
					${CMAKE_SOURCE_DIR}/external
)

#库目录
link_directories(
    ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}
)

#指定编译字符集
if(WIN32)
add_compile_options(/utf-8)
endif(WIN32)

#预编译宏
#add_definitions(XXXX)

if(WIN32)
#链接库
link_libraries( 
)
endif(WIN32)

if(UNIX)
#链接库
link_libraries( 
)
endif(UNIX)

#共享库
add_library(${PROJECT_NAME} STATIC ${SRCS})

#链接库
target_link_libraries(${PROJECT_NAME}
)