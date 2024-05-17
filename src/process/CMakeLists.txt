# 三.最里面,子文件的CMakeLists.txt
project(process)

#添加动态库,把这个文件里面的文件添加为动态库
add_library(${PROJECT_NAME} # 动态库的名称就是这个
SHARED
process.cpp  # 因为就这一个.cpp文件,所以我么就这样写了
)

# 同样要指定它的包含目录
target_include_directories(${PROJECT_NAME} 
PUBLIC 
${PNC_Map_Dir})  

# 同样去链接pnc_map的库
#解释:(我们的process动态库 要链接 pnc_map这个动态库,注意你现在要去声明pnc_map是一个动态库)
target_link_libraries(${PROJECT_NAME} 
PUBLIC 
pnc_map)

# 1. 去包含一下Eigen库
target_link_libraries(${PROJECT_NAME} 
PUBLIC 
Eigen3::Eigen
)