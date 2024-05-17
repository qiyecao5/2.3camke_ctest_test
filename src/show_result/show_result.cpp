#include<iostream>
#include "show_result.h"
// 因为我们包含了easyx库,所以我们直接引用它
#include<graphics.h> //因为我们CMakeLista.txt已经写完了,所以不会报错,如果你没写CMakeLista.txt 这里应该就报错了
using std::cout,std::endl;

// 类外定义成员函数写法
void ShowResult::drawResult()
{   
    // 绘制一个500*500的窗口
    initgraph(500, 500) ;
    setbkcolor(WHITE); //设置背景颜色
    cleardevice(); // 清空绘图区间

    cout<<"draw circles 绘制圆:"<< endl;
    setlinecolor(BLACK); //设置线条颜色为黑色
    setlinestyle(PS_SOLID, 4);// 设置线型,和粗细
    // 圆心坐标是500,500,半径200
    circle(200, 200,200);
    // 同一个圆形,半径为400 在绘制一个圆
    circle(200, 200,100);

    system("pause");
    closegraph(); //关闭窗口
}






