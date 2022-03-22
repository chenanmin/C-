 /*
 * Filename:T5_13.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.16
 * Funtion: 接收五个1-30之间的有效数值，并输出相应的星号
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
