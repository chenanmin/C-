/*
 * Filename:T4_16.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: ���㰴Сʱ�Ӱ�ѵ�н���ܶ�
*/


/*
 *�Ķ������������whileѭ�������Ա�Ĺ���ʱ�䣬�������湤��ʱ��ͼӰ�ʱ��ĳ��
 *α���룺
 *��ʼ����Ա����ʱ��Ϊ0
 *��ʼ����Ա����ʱ�乤��Ϊ0
 *��ʼ����Ա�Ĺ���Ϊ0
 *
 *�����˳�ѭ�������Ϊ-1
 *ѭ����ʼ
 *  �����û������Ա����ʱ�䣬����ʱ��Ϊ-1ʱ�˳�ѭ��
 *  �����û������Ա���湤��ʱ��Ĺ���
 *  �����Ա���ܹ���
 *
 *
 *  �����û������Ա����ʱ�䣬����ʱ��Ϊ-1ʱ�˳�ѭ��
 *  �����û������Ա���湤��ʱ��Ĺ���
 *  �����Ա���ܹ���
 *
 *  �����û����빤��ʱ�䣬����ʱ��Ϊ-1ʱ�˳�ѭ��
 *  ����ʱ��Ϊ-1���˳�ѭ��
 *
 *
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int hours = 0;
    double rate = 0;
    double salary = 0;

    cout << "Enter hours worked (-1 to end): ";
    cin >> hours;

    while( hours != -1 )
    {
        cout << "Enter hourly rate of the employee($00.00): " ;
        cin >> rate;
        if( hours > 40 )
        {
            salary = rate * 40 + rate * 1.5 *( hours - 40 );
        }else
        {
            salary = rate * hours;
        }

        cout << setprecision(2) << fixed;
        cout << "Salary is: $" << salary << endl;
        cout << endl;

        cout << "Enter hours worked (-1 to end): ";
        cin >> hours;
    }



    return 0;
}
