 /*
 * Filename:T5_21.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.18
 * Funtion:
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

void select();




int main()
{
    int counter = 0;
    double salary = 0;
    int number;     //ѡ����
    select();
    cin >> number;

    while( number > 0 )
    {
        switch(number)
        {
            case 1:
                {
                    cout << "��������Ĺ̶����ʣ� " ;
                    cin >> salary;
                    cout << "����ı��ܹ����ǣ� " << salary << endl;
                    break;
                }
            case 2:
                {
                    cout << "���������ÿСʱ�̶����ʣ� " ;
                    cin >> salary;
                    cout << "��������Ĺ���ʱ�䣺 " ;
                    cin >> counter;
                    if( counter <= 40 )
                    {
                        salary = salary * counter;
                    }else
                    {
                        salary = salary * 40 + salary *(counter-40)*1.5;
                    }
                    cout << "Сʱ���ı��ܹ���Ϊ: " << salary << endl;
                    break;
                }
            case 3:
                {
                    cout << "��������ı�������ë��: " ;
                    cin >> salary ;
                    salary = salary * 0.057 + 250;
                    cout << "Ӷ�𹤵ı��ܹ���Ϊ�� " << salary << endl;
                    break;
                }
            case 4:
                {
                    cout << "��������ÿ����Ʒ�Ĺ̶���" ;
                    cin >> salary;
                    cout << "�������������Ĳ�Ʒ������ " ;
                    cin >> counter;
                    salary = salary * counter;
                    cout << "�Ƽ����ı��ܹ����ǣ� " << salary << endl;
                    break;
                }


        }
        select();
        cin >> number;
        cout << endl;

    }




    return 0;
}

void select()
{
    cout << "1---����Ĺ��ʼ���" << endl;
    cout << "2---Сʱ���Ĺ��ʼ���" << endl;
    cout << "3---Ӷ�𹤵Ĺ��ʼ���" <<endl;
    cout << "4---�Ƽ����Ĺ��ʼ���" <<endl;
    cout << "\t�˳�---���0�����Ǹ���" << endl;
    cout << "����������룺 " << endl;

}
