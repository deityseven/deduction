project(getnamer)

#C++标准 
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#全局moc
set(CMAKE_AUTOMOC ON)

set(GETNAMER_SRC
    getnamer.h
    getnamer.cpp
)

set(SRCS 
	${GETNAMER_SRC}
)

#筛选显示
source_group(app FILES ${GETNAMER_SRC})

#包含目录
include_directories(${CMAKE_CURRENT_BINARY_DIR}
					${CMAKE_SOURCE_DIR}/external
					${CMAKE_SOURCE_DIR}/external/common
)

#库目录
link_directories(
	#${CMAKE_CURRENT_BINARY_DIR}
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
add_library(${PROJECT_NAME} STATIC ${SRCS} ${UI_FILES} ${IMAGE_RCC_SRCS})

set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DEBUGGER_WORKING_DIRECTORY ${output_dir}/bin/${CMAKE_CFG_INTDIR})
set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DEBUGGER_ENVIRONMENT "Path=$(Path);${CMAKE_PREFIX_PATH}/bin")

#链接库
target_link_libraries(${PROJECT_NAME}
  ${Qt5Core_LIBRARIES}
)
