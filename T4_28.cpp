/*
 * Filename:T4_28.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 只使用三条输出语句输出棋盘式图案
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int counter1 = 8 ;


    while( counter1 > 0 )
    {
        int counter2 = 16 ;
        if( counter1 % 2 == 0 )
        {
            while( counter2 > 0 )
            {
                cout << "* " ;
                counter2--;
            }
            cout << endl;
        }else
        {
            cout << " ";
            while( counter2 > 0 )
            {
                    cout << "* " ;
                    counter2--;
            }
            cout << endl;
        }

        counter1--;
    }



    return 0;
}
