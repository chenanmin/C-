/*
 * Filename:T2_26.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.10
 * Funtion: �ò�ͬ�ķ�ʽ�������ͼ��
*/

#include<iostream>

using namespace std;

int main()
{
    //��ĿҪ��ķ�ʽ
    cout << "��ĿҪ��ķ�ʽ" << endl;
    cout << " * * * * * * * * " << endl;
    cout << "  * * * * * * * *" << endl;
    cout << " * * * * * * * * " << endl;
    cout << "  * * * * * * * *" << endl;
    cout << " * * * * * * * * " << endl;
    cout << "  * * * * * * * *" << endl;
    cout << " * * * * * * * * " << endl;
    cout << "  * * * * * * * *" << endl;


    //�ϼ��ķ�ʽ
    cout << endl;
    cout << "�ϼ��ķ�ʽ" << endl;
    for(int i = 0 ; i < 8 ; i++)
    {
        if(i % 2 == 0)
        {
            cout << " * * * * * * * * " << endl;
        }else
        {
            cout << "  * * * * * * * *" << endl;
        }
    }
    return 0;
}
