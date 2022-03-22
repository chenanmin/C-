 /*
 * Filename:T5_18.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.18
 * Funtion: 打印1-256范围内的各个进制数
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    int number = 0;
    int number1 = 0;
    cout << left << setw(10) << "十进制" ;
    cout << left << setw(10) << "二进制" ;
    cout << left << setw(10) << "八进制" ;
    cout << left <<setw(10) << "十进制" << endl;
    for( int i = 1 ; i <= 256 ; i++ )
    {
        number = i;
        cout << setw(10) << dec << i  ;
        number1 = 1;
        int counter = 0;
        while( number != 0 )
        {
            number1 = number1 * 10 + number%2;
            number = number /2;
            counter++;
        }
        for( int i = 0 ; i < counter ; i++)
        {
            number = number * 10 + number1%10;
            number1 = number1 / 10;

        }
        cout << setw(10) << number << "\t";
//        cout << "\t\t";
        cout << setw(10) << oct << i ;
        cout << setw(10) << hex << i << endl;

    }




    return 0;
}
