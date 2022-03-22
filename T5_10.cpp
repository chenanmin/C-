 /*
 * Filename:T5_10.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.13
 * Funtion: 求1-5每个整数的阶乘并打印出来
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    int mul = 1;

    cout << "number\tfactorial" << endl;
    for(int i=1; i<=5;i++)
    {
        mul *= i;
        cout << i << "\t" << mul << endl;
    }





    long long pd = 1;
    for(int i=1;i<=20;i++)  //20的阶乘数据过大，int和long类型会溢出
    {
        pd *= i;
    }
    cout << "20的阶乘为： " << pd << endl;

    return 0;
}
