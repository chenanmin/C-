/*
 * Filename:T4_15.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 计算佣金方式下销售员的薪资
*/


/*
 *阅读问题陈述：用while循环输入销售员上周的销售毛利，计算并输出销售员上周的薪资
 *伪代码：
 *初始化销售员上周毛利为0
 *初始化销售员薪资为0
 *
 *
 *设置退出循环标记数为-1
 *循环开始
 *  提醒用户输入毛利，毛利为-1时退出循环
 *  输出销售员的薪资
 *
 *
 *  提醒用户输入毛利，毛利为-1时退出循环
 *  输出销售员的薪资
 *
 *  提醒用户输入毛利，毛利为-1时退出循环
 *  毛利为-1，退出循环
 *
 *
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double sale=0;
    double salary=0;

    cout << "Enter sales in dollars(-1 to end): " ;
    cin >> sale;

    while( sale != -1 )
    {
        salary = 200 + sale * 0.09;
        cout << setprecision(2) << fixed;
        cout << "Salary is : $" << salary << endl;

        cout << endl;

        cout << "Enter sales in dollars(-1 to end): " ;
        cin >> sale;

    }



    return 0;
}
