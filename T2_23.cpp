/*
 * Filename:T2_23.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.10
 * Funtion: 读入五个整数，找出最大值与最小值并输出
*/

#include<iostream>

using namespace std;

int main()
{
    int number1,number2,number3,number4,number5;
    cout << "please input five integers " << endl;
    cin >> number1 >> number2 >> number3 >> number4 >> number5;

    int mine;
    int maxe;
    int middle;

    // 求最小值
    mine=number1;
    if(number2 >= number3)
    {
        middle=number2;
        number2=number3;
        number3=middle;
    }
    if(number4 >= number5)
    {
        middle=number4;
        number4=number5;
        number5=middle;
    }
    if(number2 >= number4)
    {
        if(mine >= number4)
        {
            mine = number4;
        }
    }else
    {
       if(mine >= number2)
       {
           mine = number2;

       }
    }

    cout << "The smallest is " << mine << endl;


    //求最大值
    maxe=number1;
    if( number3 <= number5)
    {
        if(maxe <= number5)
        {
            maxe = number5;
        }
    }else
    {
        if(maxe <= number3)
        {
            maxe = number3;
        }
    }

    cout << "The largest is " << maxe << endl;

    return 0;
}
