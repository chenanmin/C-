 /*
 * Filename:T6_10.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: ������İ뾶����ӡ������
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

double sphereVolume(double);

int main()
{
    double radius;
    cout << "Enter the radius of the volume: ";
    cin >> radius;
    cout << "The Volume is : " << sphereVolume(radius) << endl;


    return 0;
}

inline double sphereVolume(double radius)
{
    return 4.0 / 3.0 * 3.14159 * pow(radius,3);
}
