 /*
 * Filename:T5_25.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: ʹ�ýṹ��������break��
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    unsigned int count;
    for( count = 1; count <= 10 ; ++count )
    {
        if( count == 5 )
        {
            count = 10;

        }




        cout << count << " ";

    }
    cout << "\n���ڷ��ϵ�һ����break��������������ǰ�˳�" ;
    cout << "\nBroke out of loop at count = " << count << endl;


    return 0;
}
