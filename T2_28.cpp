/*
 * Filename:T2_28.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.10
 * Funtion: 输入一个五位整数，分解每一位数字并间隔3个空格输出；
*/

#include<iostream>

using namespace std;

int main()
{
    int number;
    cout << "please input a five integers" << endl;
    cin >> number;

    int number1;
    while(number != 0 )
    {
        number1=number1*10+number%10;
        number = number/10;
    }

    while(number1 != 0 )
    {
        cout << number1%10 << "   " ;
        number1 = number1/10;
    }

    return 0;
}
