 /*
 * Filename:T5_23.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: 输出单个字符来打印菱形图案
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
   for( int i=0 ; i < 9 ; i++ )
   {
        int y=0;
       if (( i > 4 ))
       {
           for(int m=i-4;m>0;m--)
           {
               cout << " ";
           }
       }else
       {
           for(int m=(9-i)%5;m>0;m--)
           {
               cout << " ";
           }
       }
       for( int n = (2*i + 1) ; n > 0 ;n--)
       {
           if( n > 9 )
           {
               y = n - 4 * (i - 4 );
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
        if (( i > 4 ))
               {
                   for(int m=i-4;m>0;m--)
                   {
                       cout << " ";
                   }
               }else
               {
                   for(int m=(9-i)%5;m>0;m--)
                   {
                       cout << " ";
                   }
               }
       cout << endl;

   }



    return 0;
}
