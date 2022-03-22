/*
 * Filename:T4_27.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 令二进制转换为十进制
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int integer = 0;
    cout << "Enter the integer consisted of 0 and 1 : " ;
    cin >> integer;

    int number = 0;
    int counter = 0;

    while( integer % 10 == 0 )
    {
        counter++;
        integer = integer / 10;
    }
    while ( integer != 0 )
    {

        number = integer % 10 + number * 2 ;
        integer = integer / 10;

    }

    while( counter > 0 )
    {
        number = number * 2;
        counter--;
    }

    cout << "The integer consisted of 0-9 : " << number;


    return 0;
}
