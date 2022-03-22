/*
 * Filename:T2_26.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.10
 * Funtion: 用不同的方式输出棋盘图案
*/

#include<iostream>

using namespace std;

int main()
{
    //题目要求的方式
    cout << "题目要求的方式" << endl;
    cout << " * * * * * * * * " << endl;
    cout << "  * * * * * * * *" << endl;
    cout << " * * * * * * * * " << endl;
    cout << "  * * * * * * * *" << endl;
    cout << " * * * * * * * * " << endl;
    cout << "  * * * * * * * *" << endl;
    cout << " * * * * * * * * " << endl;
    cout << "  * * * * * * * *" << endl;


    //较简便的方式
    cout << endl;
    cout << "较简便的方式" << endl;
    for(int i = 0 ; i < 8 ; i++)
    {
        if(i % 2 == 0)
        {
            cout << " * * * * * * * * " << endl;
        }else
        {
            cout << "  * * * * * * * *" << endl;
        }
    }
    return 0;
}
