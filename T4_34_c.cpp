 /*
 * Filename:T4_34_c.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.13
 * Funtion: 估算出e的x次幂的值
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double x = 0;
    double number = 0;
    double fac = 1;
    double e_x = 1;

    cout << "Please Enter the number of terms: " ;
    cin >> number;

    cout << "Please Enter the x : " ;
    cin >> x;

    double i = 1;
    while( i <= number )
    {
        fac = fac * i;
        e_x = e_x + x/fac;
        ++i;
    }

    cout << "The e_x is: " << e_x;




    return 0;
}
