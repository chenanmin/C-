 /*
 * Filename:T5_31.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: ������ȡ����˰ʱ��ʵ�ʵ�˰�չ���ֵ��
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    double salary = 0.0;
    double expense = 0.0;
    double sum = 0.0;

    cout << "���������н�ʣ� " ;
    cin >> salary;
    for ( int i = 0;i < 7;i++)
    {
        cout << "���������";
        switch(i)
        {
            case 0:
                cout << "ס��" ;
                break;
            case 1:
                cout << "ʳ��" ;
                break;
            case 2:
                cout << "�·�" ;
                break;
            case 3:
                cout << "��ͨ" ;
                break;
            case 4:
                cout << "����" ;
                break;
            case 5:
                cout << "ҽ�Ʊ���" ;
                break;
            case 6:
                cout << "����" ;
                break;

        }
        cout << "������: " ;
        cin >> expense;
        sum += expense * 0.23;

    }
        cout << "˰����ֵԼΪ�� " << sum << endl;
        cout << "��˰�ձ���Ϊ�� " << (sum/salary)*100 << "%" << endl;


    return 0;
}
