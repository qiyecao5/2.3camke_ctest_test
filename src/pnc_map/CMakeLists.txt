project(pnc_map)

#添加动态库,把这个文件里面的文件添加为动态库
add_library(${PROJECT_NAME} 
SHARED 
pnc_map.cpp)

