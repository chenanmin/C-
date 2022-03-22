 /*
 * Filename:T5_28.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: 使用循环语句和Switch语句打印"The Tweleve Day of Christmas"这首歌的歌词
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    for ( int i = 1; i <= 12; i++ )
    {
        cout << "\n\tOn the ";
        switch ( i )
        {
        case 1:
            {
                cout << "first ";
                break;
            }
        case 2:
            {
                cout << "second ";
                break;
            }
        case 3:
            {
                cout << "third ";
                break;
            }
        case 4:
            {
                cout << "fourth ";
                break;
            }
        case 5:
            {
                cout << "fifth ";
                break;
            }
        case 6:
            {
                cout << "sixth ";
                break;
            }
        case 7:
            {
                cout << "seventh ";
                break;
            }
        case 8:
            {
                cout << "eighth ";
                break;
            }
        case 9:
            {
                cout << "ninth ";
                break;
            }
        case 10:
            {
                cout << "tenth ";
                break;
            }
        case 11:
            {
                cout << "eleventh ";
                break;
            }
        case 12:
            {
                cout << "twelfth ";
                break;
            }
        }
        cout << "day of Christmas\n";
        cout << "\tmy true love sent to me:\n";
        switch( i )
        {
           case 12:
            {
                cout << "\t12 Drummers Drumming\n";
            }
        case 11:
            {
                cout << "\tEleven Pipers Piping\n";
            }
        case 10:
            {
               cout << "\tTen Lords a Leaping\n";
            }
        case 9:
            {
                 cout << "\tNine Ladies Dancing\n";
            }
        case 8:
            {
                cout << "\tEight Maids a Milking\n";
        case 7:
            {
                cout << "\tSeven Swans a Swimming\n";
            }
        case 6:
            {
                cout << "\tSix Geese a Laying\n";
            }
        case 5:
            {
                cout << "\tFive Golden Rings\n";
            }
        case 4:
            {
                cout << "\tFour Calling Birds\n";
            }
        case 3:
            {
                cout << "\tThree French Hens\n";

            }
        case 2:
            {
                cout << "\tTwo Turtle Doves\n"
                    << "\tand a Partridge in a Pear Tree\n";
                break;
            }
        case 1:
            {
                cout  << "\tA Partridge in a Pear Tree\n";
                break;
            }
        }
    }
    }


    return 0;
}
