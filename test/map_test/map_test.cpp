#include<iostream>
#include "pnc_map.h"
using std::cout, std::endl;


void mapTest()
{
    cout << "this is pnc_map test" << endl;
    // 在这里写一下你想要的测试代码
    PNC_Map mymap;
    mymap.map_Info() ;
}

//这边还要有个程序入口
int main()
{
    mapTest();
    return 0;
}