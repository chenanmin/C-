/*
 * Filename:T4_08.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: ���㲢���x��y����
*/

#include<iostream>

using namespace std;

int main()
{
    unsigned int x=1;
    unsigned int y=1;
    unsigned int power=1;
    unsigned int i=1;

    cout << "please input x and y " << endl;
    cin >> x >> y;

    while( i <= y )
    {
        power *= x;
        i++;
    }

    cout << "The power is: " << power << endl;


}
