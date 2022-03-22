/*
 * Filename:T4_32.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 输入三个数，判断能否表示三角形的三条边
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double number1,number2,number3;
    cout << "Enter input three number: ";
    cin >> number1 >> number2 >> number3;

    if( number1 + number2 > number3 )
    {
        if( number1 - number2 < number3 )
        {
            cout << "该三条边能组成三角形" << endl;
        }else
        {
            cout << "该三条边不能组成三角形" << endl;
        }

    }else
    {
        cout << "该三条边不能组成三角形" << endl;
    }


    return 0;
}
