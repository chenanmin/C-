/*
 * Filename:T4_14.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: �ж��̳��˿͵�֧������Ƿ񳬳�����Ƿ�˻������ö��
*/


/*
 *�Ķ������������whileѭ������ͻ���Ϣ�������µ�Ƿ����ж��µ�Ƿ���Ƿ񳬹��ͻ������ö��
 *α���룺
 *��ʼ���˺�Ϊ0
 *��ʼ���³�Ƿ��Ϊ0
 *��ʼ�����¹�����ܽ��Ϊ0
 *��ʼ�������˻�������ܽ��Ϊ0
 *��ʼ���������ö��Ϊ0
 *
 *
 *�����˳�ѭ�������Ϊ-1
 *ѭ����ʼ
 *  �����û������˺ţ��˺�Ϊ-1ʱ�˳�ѭ��
 *  �����û������³�Ƿ��
 *  �����û�������¹�����ܽ��
 *  �����û�������´�����ܽ��
 *  �����û�������������ö��
 *  �ж��µ�Ƿ���Ƿ񳬶�
 *  ��������������ʾ
 *  ����µ�Ƿ��
 *  ����˻�
 *  ����˻������ö��
 *  ����µ�Ƿ��
 *  �����û�����
 *  ��û�г���
 *  ������µ�Ƿ��
 *
 *
 *
 *
 *  �����û������˺ţ��˺�Ϊ-1ʱ�˳�ѭ��
 *  �˺�Ϊ-1���˳�ѭ��
 *
 *
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int account = 0;
    double balance = 0;
    double charge = 0;
    double credit = 0;
    double limit = 0;

    cout << "Enter account number (or -1 to quit): " ;
    cin >> account;

    while(account != -1)
    {
        cout << "Enter begining balance: " ;
        cin >> balance;
        cout << "Enter total charges: ";
        cin >> charge;
        cout << "Enter total credits: ";
        cin >> credit;
        cout << "Enter credit limit: ";
        cin >> limit;

        balance = balance + charge - credit;
        cout << "New balance is " << balance << endl;
        if( balance > limit )
        {
            cout << "Account:   " << account << endl;
            cout << setprecision(2) << fixed;
            cout << "Credit limit:  " << limit << endl;
            cout << "Balance:    " << balance << endl;
            cout << "Credit Limit Exceeded." << endl;
        }

        cout << endl;

        cout << "Enter account number (or -1 to quit): " ;
        cin >> account;

    }



    return 0;
}
