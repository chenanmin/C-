/*
 * Filename:T4_15.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: ����Ӷ��ʽ������Ա��н��
*/


/*
 *�Ķ������������whileѭ����������Ա���ܵ�����ë�������㲢�������Ա���ܵ�н��
 *α���룺
 *��ʼ������Ա����ë��Ϊ0
 *��ʼ������Աн��Ϊ0
 *
 *
 *�����˳�ѭ�������Ϊ-1
 *ѭ����ʼ
 *  �����û�����ë����ë��Ϊ-1ʱ�˳�ѭ��
 *  �������Ա��н��
 *
 *
 *  �����û�����ë����ë��Ϊ-1ʱ�˳�ѭ��
 *  �������Ա��н��
 *
 *  �����û�����ë����ë��Ϊ-1ʱ�˳�ѭ��
 *  ë��Ϊ-1���˳�ѭ��
 *
 *
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double sale=0;
    double salary=0;

    cout << "Enter sales in dollars(-1 to end): " ;
    cin >> sale;

    while( sale != -1 )
    {
        salary = 200 + sale * 0.09;
        cout << setprecision(2) << fixed;
        cout << "Salary is : $" << salary << endl;

        cout << endl;

        cout << "Enter sales in dollars(-1 to end): " ;
        cin >> sale;

    }



    return 0;
}
