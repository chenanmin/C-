/*
 * Filename:T4_26.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 读入一个5位数，判断是否为回文数
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int number = 0;
    cout << "Enter the five numbers: " ;
    cin >> number;

    int number1 = 0;
    int middle = number;
    while( middle != 0 )
    {

        number1 = middle % 10 + number1 * 10;
        middle = middle / 10;

    }

    if( number1 == number )
    {
        cout << "这个数是回文数" << endl;
    }else
    {
        cout << "这个数不是回文数" << endl;
    }



    return 0;
}
