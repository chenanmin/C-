 /*
 * Filename:T5_29.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion:用循环嵌套计算从5%-10%的利率下的复利。
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
   double amount;
   double principal = 24.0;
   double rate = 0.05;

   cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;

   cout << setprecision( 2 ) << fixed ;

   for( rate = 0.05; rate <= 0.10 ; rate += 0.01)
   {
       for( unsigned int year = 1;year <= 387; year++)
       {
           amount = principal * pow( 1.0 + rate ,year );
           cout << setw(4) << year << "\t" << setw(21) << amount << endl;
       }
       cout << endl;
   }

    return 0;
}
