/*
 * Filename:T4_32.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: �������������ж��ܷ��ʾ�����ε�������
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
            cout << "�������������������" << endl;
        }else
        {
            cout << "�������߲������������" << endl;
        }

    }else
    {
        cout << "�������߲������������" << endl;
    }


    return 0;
}
