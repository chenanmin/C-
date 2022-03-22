 /*
 * Filename:T5_5.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.13
 * Funtion: 求一系列整数之和
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    int counter = 0 ;
    int number = 0;
    int sum = 0;
    cout << "Please enter what you want to caculate the numbers: " ;
    cin >> counter;

    for( int i=0 ; i < counter ; i++ )
    {
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
    }
    cout << "The sum is : " << sum << endl;

    return 0;
}
