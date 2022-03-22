 /*
 * Filename:T5_11.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.13
 * Funtion: 计算不同利率下的复利金额，
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    double amount;
    double principal = 1000.00;
    double rate = 0.05;

    cout << "Year" << setw( 4 ) << "\tRate" << setw( 21 ) << "Amount on deposit" << endl;
    cout << fixed << setprecision(2) ;

    for(int i=0;i<6;i++)
    {
        for(unsigned int year = 1; year <= 10; ++year )
        {
            amount = principal * pow((1.0+rate),year);
            cout << setw(4) << year << "\t" << rate <<  setw(21) << amount << endl;
        }
        rate += 0.01;
    }



    return 0;
}
