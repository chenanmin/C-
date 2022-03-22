 /*
 * Filename:T5_16.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.16
 * Funtion: 只使用整数计算复利
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    int amount;
    int principal = 1000;
    int rate = 5;

    cout << "Year" << setw(21) << "Amount on deposit" << endl;

    for( unsigned int year = 1; year <=10; ++year)
    {
        amount = principal * pow(100+rate,year)*100/pow(100,year);
        cout << setw(4) << year << setw(21) << amount /100<< "." << amount %100<< endl;
    }




    return 0;
}
