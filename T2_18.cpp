/*
 * Filename:T2_18.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.09
 * Funtion: ����������������������������"These numbers are equal. ",����������������
*/



#include <iostream>

using namespace std;

int main()
{
    int number1,number2;
    cout << "please input two number" << endl;
    cin >> number1 >> number2;
    if(number1==number2)
    {
        cout << "These numbers are equal." << endl;

    }else
    {
        if(number1>number2)
        {
            cout << number1 << " is large." <<endl;

        }else
        {
            cout << number2 << " is large." << endl;
        }
    }



    return 0;
}
