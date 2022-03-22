 /*
 * Filename:T5_22.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.18
 * Funtion: 证明德摩根定律的实现
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    int x,y,a,b,g,i,j;
    cout << "!( x < 5 ) && !( y >= 7 )为： " <<   endl;
    if((bool)(!( x < 5 ) && !( y >= 7 )))
    {
        cout << "True" << endl;
    }else
    {
        cout << "False" << endl;
    }
    cout << "!(( x < 5 ) || ( y >= 7 ))为： " <<  endl;
    if((bool)(!(( x < 5 ) || ( y >= 7 ))))
    {
        cout << "True" << endl;
    }else
    {
        cout << "False" << endl;
    }

    cout << "!( a == b ) || !( g != 5 )为" <<endl;
    if((bool)(!( a == b ) || !( g != 5 )))
    {
        cout << "True" << endl;
    }else
    {
        cout << "False" << endl;
    }
    cout << "!(( a == b) && ( g != 5 ))为" << endl;
    if((bool)(!(( a == b) && ( g != 5 ))))
    {
        cout << "True" << endl;
    }else
    {
        cout << "False" << endl;
    }


    cout << "!((x <= 8) &&  ( y > 4 ))为： " << endl;
    if((bool)(!((x <= 8) &&  ( y > 4 ))))
    {
        cout << "True" << endl;
    }else
    {
        cout << "False" << endl;
    }
    cout << "!( x <= 8 ) || !( y > 4 )为： "  << endl;
    if((bool)(!( x <= 8 ) || !( y > 4 )))
    {
        cout << "True" << endl;
    }else
    {
        cout << "False" << endl;
    }

    cout << "!(( i > 4 ) || ( j <= 6 ))为： " << endl;
    if((bool)(!(( i > 4 ) || ( j <= 6 ))))
    {
        cout << "True" << endl;
    }else
    {
        cout << "False" << endl;
    }
    cout << "!( i > 4 ) && !( j <= 6 )为： " <<endl;
    if((bool)(!( i > 4 ) && !( j <= 6 )))
    {
        cout << "True" << endl;
    }else
    {
        cout << "False" << endl;
    }


    return 0;
}
