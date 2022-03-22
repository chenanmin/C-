/*
 * Filename:T4_16.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 计算按小时加班费的薪金总额
*/





#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int counter = 0;
    int number = 0;
    int largest = 0;

    while( counter <= 10)
    {
        cout << "Enter the number: " << endl;
        cin >> number;
        counter++;


        if( largest < number )
        {
            largest = number ;
        }
    }

    cout << "The largest is : " << largest << endl;





    return 0;
}
