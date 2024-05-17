#include<iostream>
#include "process.h"
// 包含一下绘图的头文件
#include "show_result.h"
using std::cout, std::endl;


int main()
{
    cout << "planing start" << endl;
    Process pro;  //创建过程类对象
    pro.planProcess();
    cout << "planing end" << endl;

    cout << "show_result" << endl;
    ShowResult show; 
    show.drawResult();

    return 0;
}
