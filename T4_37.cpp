 /*
 * Filename:T4_37.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.13
 * Funtion: �г�������75����˿��������ж���һ���ǽ����˿���������
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    double population[75];
    double population0 = 78;
    static double rate = 0.0009;

    cout << "��_��\t\t" << "����ĩ���˿�(����)\t" << "�������ӵ��˿���(����)" << endl;
    cout << "��" << 0 << "��\t\t" <<   population0 << "        \t\t" << 0 << endl;;
    int i = 0;
    population[0] = population0 * ( 1 + rate );
    cout << "��" << i+1 << "��\t\t" <<   population[i] << "        \t\t" << population[0] - population0 << endl;;
    while( i < 75 )
    {

        i++;
        population[i] = population[i-1] * ( 1 + rate );
        cout << "��" << i+1 << "��\t\t" <<   population[i] << "        \t\t" << population[i] - population[i-1] << endl;



    }

    int j = 0;
    double population1 = population0;
    while( population1 <= 2 * population0 )
    {
        population1 = population1  * ( 1 + rate );
        j++;
    }

    cout << "�ڵ�" << j+2021 << "�꣬�����˿��ǽ��������" << endl;
    return 0;
}
