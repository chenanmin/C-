/*
 * Filename:T4_13.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 输入每次出车的行驶英里数和加油量，计算并打印到本次出车为止的所有加油综合计算的每加仑英里数
*/


/*
 *阅读问题陈述：用while循环输入行驶英里数和加油数，计算输出每加仑英里数
 *伪代码：
 *初始化行驶距离为0
 *初始化加油数为0
 *初始化行驶总距离为0
 *初始化加油总数
 *初始化当时每加仑英里数为0
 *初始化总每加仑英里数为0
 *
 *设置退出循环标记数为-1
 *循环开始
 *  提醒用户输入行驶距离，行驶距离为-1时退出循环
 *  提醒用户输入加油数
 *  输出当前阶段每加仑英里数
 *  输出总阶段每加仑英里数
 *
 *  提醒用户输入行驶距离，行驶距离为-1时退出循环
 *  提醒用户输入加油数
 *  输出当前阶段每加仑英里数
 *  输出总阶段每加仑英里数
 *
 *  提醒用户输入行驶距离，行驶距离为-1时退出循环
 *  输入行驶距离为-1吗，退出程序
 *
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double dri=0;
    double gall=0;
    double mdri=0;
    double mgal=0;
    double mpg=0;
    double MPG=0;


    cout << "Enter miles driven(-1 to quit): " ;
    cin >> dri;

    while( dri != -1 )
    {

        cout << "Enter gallons used: " ;
        cin >> gall;

        mdri += dri;
        mgal += gall;

        mpg = dri/gall;
        MPG = mdri/mgal;

        cout << setprecision(6) << fixed;
        cout << "MPG this trip: " << mpg << endl;
        cout << "Total MPG : " << MPG <<endl;

        cout << endl;

        cout << "Enter miles driven(-1 to quit): " ;
        cin >> dri;

    }

    return 0;
}
