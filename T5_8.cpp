 /*
 * Filename:T5_8.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.13
 * Funtion: 求一系列整数中的最小数
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int number = 0;
    int minium = 0;
    int counter = 0;
    cout << "Enter the counter: " ;
    cin >> counter;

    cout << "Enter the number: ";
    cin >> number;
    minium = number;
    counter--;

    for( counter ; counter > 0 ; counter--)
    {
        cout << "Enter the number: ";
        cin >> number;
        if( minium > number )
        {
            minium = number;
        }

    }
    cout << "The smallest is : " << minium << endl;


    return 0;
}
