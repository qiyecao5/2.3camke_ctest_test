#include<iostream>
#include "process.h"
#include <Eigen/Dense>
using std::cout, std::endl;
using Eigen::MatrixXd;  // 指定这个命名空间

// 类外实现这个方法
void Process::planProcess()
{
    cout << "this is planning Process 成员函数" << endl;
    my_map.map_Info();

    //创建一个2*2的方阵
    MatrixXd m(2, 2);
    //指定一下这四个元素的值
    m(0, 0) = 3;
    m(1, 0) = 5;
    m(0, 1) = -1;
    m(1, 1) = m(1, 0) + m(0, 1);
    cout << m << endl; //最后把这个矩阵打印出来

    cout << " planning success! 计划成功" << endl;
}