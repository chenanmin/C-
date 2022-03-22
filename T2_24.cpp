/*
 * Filename:T2_24.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.10
 * Funtion: 判断一个整数是奇数还是偶数
*/

#include<iostream>

using namespace std;

int main()
{
    int number;
    cout << "plaese input a integer" << endl;
    cin >> number;

    if(number % 2 == 0)
    {
        cout << "该数是偶数" << endl;
    }else
    {
        cout << "该数不是偶数，是奇数"  << endl;
    }



    return 0;
}
