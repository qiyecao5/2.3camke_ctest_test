project(map_test)

# 生成一个单独的可执行文件,和planning_main.cpp是没有关系的
# planning_main.cpp是主程序需要用的可执行文件,而我们测试只是把其中一部分代码,单独拿出来进行测试
# 所以我们要单独编程成一个可执行文件
add_executable(${PROJECT_NAME} map_test.cpp)

# 包含Pnc_map的头文件
target_include_directories(${PROJECT_NAME}   
    PUBLIC  
    ${PNC_Map_Dir}
)

# 把这个可执行文件 链接到 pnc_map动态库上
target_link_libraries(${PROJECT_NAME} PUBLIC pnc_map)

# 添加一个测试，该测试将运行上面定义的可执行文件  
add_test(
    NAME map_info_test # 要测试 map_info_test这个函数
    COMMAND ${PROJECT_NAME}
    )

