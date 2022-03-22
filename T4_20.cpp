/*
 * Filename:T4_20.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 输入的有效性确认
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int number =0;
    cout << " Enter the number " ;
    cin >> number;

    while( number != 1 && number !=2 )
    {
        cout << "Your enter is error " << endl;
        cout << " Enter the number " ;
        cin >> number;
    }

    cout << "Your enter is right" << endl;


    return 0;
}
