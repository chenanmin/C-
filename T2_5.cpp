/*
 * Filename:T2_05.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.09
 * Funtion: 算出三个整数的乘积
*/




#include <iostream>

using namespace std;

int main()
{
    //计算三个整数的乘积

    int x=0;
    int y=0;
    int z=0;
    int result=0;

    cout << "please input three integer" <<endl;
    cin >> x >> y >>z;
    result=x*y*z;

    cout << "The product is: " << result <<endl;

    return 0;
}
