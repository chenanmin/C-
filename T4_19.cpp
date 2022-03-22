/*
 * Filename:T4_19.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 输出10个数中最大的两个数
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int counter=1;
    int number=0;
    int largest=0;
    int slargest=0;
    int middle=0;

    while( counter <= 10 )
    {
        cout << "Enter the number: " ;
        cin >> number;

        counter++;
        if( largest < number )
        {
            middle = largest;
            largest = number;
            slargest = middle;

        }else
        {
            if( slargest < number )
            {
                slargest = number;
            }
        }


    }

    cout << "The largest is " << largest <<endl;
    cout << "The second largest is " << slargest << endl;



    return 0;
}
