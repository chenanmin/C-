/*
 * Filename:T4_30.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 计算圆的直径、周长和面积
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double r = 0.0;
    cout << "Enter the radius of circle: ";
    cin >> r;

    static double PI = 3.14159;
    cout << setprecision(5) << fixed ;
    cout << "The diameter of circle is : " << 2 * r << endl;
    cout << "The petrimeter of circle is : " << PI * r * 2 << endl;
    cout << "The area of the circle is : " << PI * r * r << endl;

    return 0;
}
