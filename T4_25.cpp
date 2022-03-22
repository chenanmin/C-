/*
 * Filename:T4_25.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 输入正方形的边长,打印出一个由星号和空格组成的正方形
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int number=0;
    int i = 0;
    cout << "Enter the number: " ;
    cin >> number;

    while ( number > 20 )
    {
        cout << "The number is too big." << endl;
        cout << "Enter the number" ;
        cin >> number;
    }

    i = number;

    while ( i > 0 )
    {
        cout << "*";
        i--;
    }

    cout << endl;
    i = number - 2;
    while( i > 0 )
    {
        int j = number;
        while( j > 0 )
        {
            if( j == number || j == 1 )
            {
                cout << "*";
            }else
            {
                cout << " ";
            }
            j--;
        }
        cout << endl;


        i--;
    }

    i = number;

    while ( i > 0 )
    {
        cout << "*";
        i--;
    }

    return 0;
}
