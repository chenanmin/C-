/*
 * Filename:T2_27.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.10
 * Funtion: ��������ϼ�����ַ�����Ӧ���������������洢��һ��char���͵ı�����
*/

#include<iostream>

using namespace std;

int main()
{
    char ch;
    cout << "please input a character" << endl;
    cin >> ch;

    int number;
    number = static_cast< int >(ch);

    cout << static_cast< int >(ch);

    return 0;
}
