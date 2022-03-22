 /*
 * Filename:T4_34_b.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.13
 * Funtion: 估算出数学常量e的值
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double number = 0.0;
    double fac = 1;
    cout << "Please enter a number of terms: " ;
    cin >> number;

    double e = 1;
    double i=1;
    while( i <= number )
    {
        fac = fac * i;
        e = e + 1/fac;
        ++i;
    }

    cout << "The e is: " << e << endl;

    return 0;
}
