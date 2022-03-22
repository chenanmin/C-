 /*
 * Filename:T6_03.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: 测试图6.2的数学库函数
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    x = 9.2;
    cout << setprecision(6) << fixed;
    cout << "ceil(" << x << ")为" << ceil(x) << endl;
    x = -9.8;
    cout << "ceil(" << x << ")为" << ceil(x) << endl;

    x = 0.0;
    cout << "cos(" << x << ")为" << cos(x) << endl;

    x = 1.0;
    cout << "exp(" << x << ")为" << exp(x) << endl;
    x = 2.0;
    cout << "exp(" << x << ")为" << exp(x) << endl;

    x = 5.1;
    cout << "fabs(" << x << ")为" << fabs(x) << endl;
    x = 0.0;
    cout << "fabs(" << x << ")为" << fabs(x) << endl;
    x = -8.76;
    cout << "fabs(" << x << ")为" << fabs(x) << endl;

    x = 9.2;
    cout << "floor(" << x << ")为" << floor(x) << endl;
    x = -9.8;
    cout << "floor(" << x << ")为" << floor(x) << endl;

    x = 2.6;
    y = 1.2;
    cout << "fmod(" << x << "," << y << ")为" << fmod(x,y) << endl;

    x = 2.718282;
    cout << "log(" << x << ")为" << log(x) << endl;
    x = 7.389056;
    cout << "log(" << x << ")为" << log(x) << endl;

    x = 10.0;
    cout << "log10(" << x << ")为" << log10(x) << endl;
    x = 100.0;
    cout << "log10(" << x << ")为" << log10(x) << endl;

    x = 2;
    y = 7;
    cout << "pow(" << x << "," << y << ")为" << pow(x,y) << endl;
    x = 9;
    y = 0.5;
    cout << "pow(" << x << "," << y << ")为" << pow(x,y) << endl;

    x = 0.0;
    cout << "sin(" << x << ")为" << sin(x) << endl;

    x = 9.0;
    cout << "sqrt(" << x << ")为" << sqrt(x) << endl;

    x = 0.0;
    cout << "tan(" << x << ")为" << tan(x) <<endl;


    return 0;
}
