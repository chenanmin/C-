 /*
 * Filename:T5_32.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: �ڹ̶��������£���ʱFaceBook���û��ﵽ25�ڡ�
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    double users = 10.0;
    double current = 10.0;
    double rate ;
    int counter = 0;
    for ( rate = 0.02 ; rate <= 0.05;rate += 0.01)
    {
        cout << "������Ϊ" << rate*100 << "%ʱ��" << endl;
        users = 10.0;
        counter = 0;
        cout << "Year" << setw(21) << "Current Population" << endl;
        while( users < 25 )
        {
            users = current * pow( 1 + rate , counter );
            cout << "��" << counter << "��\t" << users << endl;
            counter++;
        }
        cout << "��" << counter-1 << "���FaceBook�û��ﵽ25��" << endl;

    }

    return 0;
}
