 /*
 * Filename:T4_36_encrypt.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.13
 * Funtion: 对用户输入的四位数进行加密
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int number = 0;
    cout << "Enter a four numbers: " ;
    cin >> number;

    int m[4];
    int i = 0;
    while( number != 0 )
    {
        m[i]=number % 10;
        number = number / 10;
        i++;
    }
    while( i >= 0 )
    {
        m[i]=( m[i] + 7 ) % 10;
        i--;
    }


    int middle = 0;
    middle = m[0];
    m[0] = m[2];
    m[2] = middle;

    middle = m[1];

    m[1] = m[3];
    m[3] = middle;


    cout << "The sectory number is: " << m[3] << m[2] << m[1] << m[0];

    return 0;
}
