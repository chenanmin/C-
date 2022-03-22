 /*
 * Filename:T6_12.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: 以整齐的表格形式打印停车场的收费详情
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

double calculateCharges(double);

int main()
{
    double hours;
    double charges;
    double sumHours = 0;
    double sumCharges = 0;
    cout << "Car\tHours\tCharges"<< endl;
    for ( int i = 0; i < 3; i++ )
    {
        cout << "Enter your hours to stay for a time: ";
        cin >> hours;
        sumHours  += hours;
        charges = calculateCharges(hours);
        sumCharges += charges;
        cout << i << "\t" << hours << "\t" << charges << endl;

    }
    cout << "TOTAL\t" << sumHours << "\t" << sumCharges << endl;


    return 0;
}

double calculateCharges(double hours)
{
    double sum = 0;
    if( hours <= 3.0 )
    {
        sum = 2.00;
    }else
    {
        sum = 2.00 + 0.50 * (hours - 3.0);
        if ( sum > 10)
        {
            sum = 10;
        }
    }
    return sum ;
}
