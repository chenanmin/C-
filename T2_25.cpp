/*
 * Filename:T2_25.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.10
 * Funtion: ���������������жϵ�һ�����Ƿ��ǵڶ������ı���
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
        cout << "��һ�����ǵڶ������ı���" << endl;

    }else
    {
        cout << "��һ�������ǵڶ������ı���" << endl;
    }


    return 0;
}
