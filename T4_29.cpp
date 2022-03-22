/*
 * Filename:T4_29.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 连续打印整数2的幂
*/

/*
 *该程序结果是依次打印出整数2的幂，然后数值过大溢出，打印出负数和0

*/
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int number = 2;
    while( true )
    {


        cout << number << endl;
        number = number * 2;
    }


    return 0;
}
