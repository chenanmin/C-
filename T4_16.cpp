/*
 * Filename:T4_16.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 计算按小时加班费的薪金总额
*/


/*
 *阅读问题陈述：用while循环输入雇员的工作时间，计算正规工作时间和加班时间的酬金
 *伪代码：
 *初始化雇员工作时间为0
 *初始化雇员正规时间工资为0
 *初始化雇员的工资为0
 *
 *设置退出循环标记数为-1
 *循环开始
 *  提醒用户输入雇员工作时间，工作时间为-1时退出循环
 *  提醒用户输入雇员正规工作时间的工资
 *  输出雇员的总工资
 *
 *
 *  提醒用户输入雇员工作时间，工作时间为-1时退出循环
 *  提醒用户输入雇员正规工作时间的工资
 *  输出雇员的总工资
 *
 *  提醒用户输入工作时间，工作时间为-1时退出循环
 *  工作时间为-1，退出循环
 *
 *
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int hours = 0;
    double rate = 0;
    double salary = 0;

    cout << "Enter hours worked (-1 to end): ";
    cin >> hours;

    while( hours != -1 )
    {
        cout << "Enter hourly rate of the employee($00.00): " ;
        cin >> rate;
        if( hours > 40 )
        {
            salary = rate * 40 + rate * 1.5 *( hours - 40 );
        }else
        {
            salary = rate * hours;
        }

        cout << setprecision(2) << fixed;
        cout << "Salary is: $" << salary << endl;
        cout << endl;

        cout << "Enter hours worked (-1 to end): ";
        cin >> hours;
    }



    return 0;
}
