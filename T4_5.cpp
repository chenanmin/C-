/*
 * Filename:T4_05.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: ���㲢���1~10֮��
*/

#include<iostream>

using namespace std;

int main()
{
    unsigned int x=0;
    unsigned sum=0;

    while( x <= 10 )
    {
        sum += x;
        x++;

    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
