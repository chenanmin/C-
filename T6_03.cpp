 /*
 * Filename:T6_03.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: ����ͼ6.2����ѧ�⺯��
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
    cout << "ceil(" << x << ")Ϊ" << ceil(x) << endl;
    x = -9.8;
    cout << "ceil(" << x << ")Ϊ" << ceil(x) << endl;

    x = 0.0;
    cout << "cos(" << x << ")Ϊ" << cos(x) << endl;

    x = 1.0;
    cout << "exp(" << x << ")Ϊ" << exp(x) << endl;
    x = 2.0;
    cout << "exp(" << x << ")Ϊ" << exp(x) << endl;

    x = 5.1;
    cout << "fabs(" << x << ")Ϊ" << fabs(x) << endl;
    x = 0.0;
    cout << "fabs(" << x << ")Ϊ" << fabs(x) << endl;
    x = -8.76;
    cout << "fabs(" << x << ")Ϊ" << fabs(x) << endl;

    x = 9.2;
    cout << "floor(" << x << ")Ϊ" << floor(x) << endl;
    x = -9.8;
    cout << "floor(" << x << ")Ϊ" << floor(x) << endl;

    x = 2.6;
    y = 1.2;
    cout << "fmod(" << x << "," << y << ")Ϊ" << fmod(x,y) << endl;

    x = 2.718282;
    cout << "log(" << x << ")Ϊ" << log(x) << endl;
    x = 7.389056;
    cout << "log(" << x << ")Ϊ" << log(x) << endl;

    x = 10.0;
    cout << "log10(" << x << ")Ϊ" << log10(x) << endl;
    x = 100.0;
    cout << "log10(" << x << ")Ϊ" << log10(x) << endl;

    x = 2;
    y = 7;
    cout << "pow(" << x << "," << y << ")Ϊ" << pow(x,y) << endl;
    x = 9;
    y = 0.5;
    cout << "pow(" << x << "," << y << ")Ϊ" << pow(x,y) << endl;

    x = 0.0;
    cout << "sin(" << x << ")Ϊ" << sin(x) << endl;

    x = 9.0;
    cout << "sqrt(" << x << ")Ϊ" << sqrt(x) << endl;

    x = 0.0;
    cout << "tan(" << x << ")Ϊ" << tan(x) <<endl;


    return 0;
}
