 /*
 * Filename:T5_13.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.16
 * Funtion: �������1-30֮�����Ч��ֵ���������Ӧ���Ǻ�
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    int number = 0;
    int counter = 5;
    while( counter>=0 )
    {
        cout << "Please enter a number (1-30): ";
        cin >> number;
        for(number;number > 0 ; number--)
        {
            cout << "*" ;
        }
        cout << endl;
        counter--;

    }




    return 0;
}
