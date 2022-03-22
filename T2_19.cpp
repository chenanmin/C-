/*
 * Filename:T2_19.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.09
 * Funtion: 从键盘接收三个数，并输出三个数的和、平均值、乘积、最小值和最大值。
*/



#include <iostream>

using namespace std;

int main()
{
    int number1,number2,number3;
    cout << "Input three different integers: ";
    cin >> number1 >> number2 >> number3;

    cout << "Sum is " << number1 + number2 + number3 << endl;
    cout << "Average is " << (number1 + number2 + number3)/3 << endl;
    cout << "Product is " << number1 * number2 * number3 << endl;

    int mine,maxe;
    mine=number1;
    if(mine>=number2)
    {
        mine=number2;
        if(mine>=number3)
        {
            mine = number3;
        }
    }else
    {
        if(mine>=number3)
        {
            mine=number3;
        }
    }

    cout << "Smallest is " << mine <<endl;

    maxe=number1;
    if(maxe<=number2)
    {
        maxe=number2;
        if(maxe<=number3)
        {
            maxe = number3;
        }
    }else
    {
        if(maxe<=number3)
        {
            maxe=number3;
        }
    }

    cout << "Largest is " << maxe << endl;



    return 0;
}

