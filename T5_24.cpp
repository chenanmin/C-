 /*
 * Filename:T5_24.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: 输入数字，并打印出适应行数的菱形图案。
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    int select = 0;
    cout << "Enter your want to ouput the line numbers(1-19中的奇数): ";
    cin >> select;


   for( int i=0 ; i < select ; i++ )
   {
        int y=0;
       if (( i > select/2 ))
       {
           for(int m=i-select/2;m>0;m--)
           {
               cout << " ";
           }
       }else
       {
           for(int m=(select-i)%( select/2 + 1 );m>0;m--)
           {
               cout << " ";
           }
       }
       for( int n = (2*i + 1) ; n > 0 ;n--)
       {
           if( n > select )
           {
               y = n - 4 * (i - select/2 );
               for( y ; y > 0 ; y-- )
               {
                   cout << "*" ;

               }
               break;
           }else
           {
               cout << "*";
           }

       }
       if (( i > select/2 ))
       {
           for(int m=i-select/2;m>0;m--)
           {
               cout << " ";
           }
       }else
       {
           for(int m=(select-i)%( select/2 + 1 );m>0;m--)
           {
               cout << " ";
           }
       }
       cout << endl;

   }



    return 0;
}
