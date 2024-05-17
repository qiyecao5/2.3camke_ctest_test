project(show_result)  # 这个项目名称

#添加动态库,把这个文件里面的文件添加为动态库
add_library(${PROJECT_NAME} 
SHARED 
show_result.cpp)

# 我们让process调用这个
# 它需要依赖process这个目录,所以我们把Process_Dir这个目录包含进来
# 去process这里找头文件
target_include_directories(${PROJECT_NAME} 
PUBLIC 
${Process_Dir})  


# 同样去链接process的库,就是让这个show_result动态库,可以使用process库(process.cpp)里面函数
target_link_libraries(${PROJECT_NAME} 
PUBLIC 
process)  # 要使用process这个动态库

#  注意:要让他依赖我们的easyx,就是我们复制进来的那两个静态库
target_link_libraries(${PROJECT_NAME} 
PUBLIC 
easyx) 