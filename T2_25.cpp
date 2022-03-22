/*
 * Filename:T2_25.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.10
 * Funtion: 读入两个整数，判断第一个数是否是第二个数的倍数
*/

#include<iostream>

using namespace std;

int main()
{
    int number1,number2;
    cout << "please input two integers" << endl;
    cin >> number1 >> number2;

    if(number1 % number2 == 0)
    {
        cout << "第一个数是第二个数的倍数" << endl;

    }else
    {
        cout << "第一个数不是第二个数的倍数" << endl;
    }


    return 0;
}
