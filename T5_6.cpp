 /*
 * Filename:T5_6.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.13
 * Funtion: ��һϵ��������ƽ����
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    int number = 0;
    int counter = 0;
    double sum = 0.0;
    cout << "Please enter the number: ";
    cin >> number;

    for( int i = number ;i != 9999;cin >> i)
    {
        sum +=i;
        counter++;
        cout << "Please enter the number: ";
    }

    cout << "The Average is : " << sum/counter << endl;


    return 0;
}
