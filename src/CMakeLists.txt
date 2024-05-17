# 二.中间的CMakeLists.txt

# 1 首先指定工程名,我们这个CMakeLists.txt 是给planning_main.cpp服务的
project(planning_main)  

# 2 它需要添加两个子目录
add_subdirectory(pnc_map)
add_subdirectory(process)
add_subdirectory(show_result)

# 3 我们的main函数在这一层(在planning_main.cpp里面),所以我们把planning_main.cpp添加为可执行文件 ,生成可执行文件
add_executable(${PROJECT_NAME} planning_main.cpp) 

# 4. 告诉 CMake 在构建目标时，应该在哪里查找所需的头文件
target_include_directories(${PROJECT_NAME}  
    PUBLIC  
    ${Process_Dir}  # 父类里面定义的路径变量,这里可以直接调用
)  

# 5.把生成的可执行文件  去链接 process这个库(注意process要去子目录里面生命process这个动态库)
#解释:(我们的可执行文件 要链接 process这个动态库,注意你现在要去声明process是一个动态库)
target_link_libraries(${PROJECT_NAME} 
PUBLIC 
process)


# 这里别忘了包含绘图的头文件目录
target_include_directories(${PROJECT_NAME}  
    PUBLIC  
    ${Show_Result_Dir} 
)  

# 链接我们绘制结果的动态库链接
target_link_libraries(${PROJECT_NAME} 
PUBLIC 
show_result)