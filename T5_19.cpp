 /*
 * Filename:T5_19.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.18
 * Funtion: ��ӡһ�ű���ʾ�ֱ�ȡǰ1-1000��ʱ�еĽ���ֵ
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    double pi = 0;
    double counter = 1;
    pi = 4/counter;

    for( int i = 1 ; i <= 1000 ; i += 2 )
    {
        cout << "ǰ" << setw(5) << i << "��\t"  ;
        cout << setprecision(10) << fixed;
        cout << pi << endl;
        counter = (counter+2)*(-1);
        pi += 4/counter;
        cout << "ǰ" << setw(5) << i+1 << "��\t"  ;
        cout << pi << endl;
        counter = (-1)*counter +2;
        pi += 4/counter;

    }


    return 0;
}
