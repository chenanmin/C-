 /*
 * Filename:T5_31.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: 计算收取消费税时，实际的税收估计值。
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    double salary = 0.0;
    double expense = 0.0;
    double sum = 0.0;

    cout << "请输入你的薪资： " ;
    cin >> salary;
    for ( int i = 0;i < 7;i++)
    {
        cout << "请输入你的";
        switch(i)
        {
            case 0:
                cout << "住房" ;
                break;
            case 1:
                cout << "食物" ;
                break;
            case 2:
                cout << "衣服" ;
                break;
            case 3:
                cout << "交通" ;
                break;
            case 4:
                cout << "教育" ;
                break;
            case 5:
                cout << "医疗保健" ;
                break;
            case 6:
                cout << "旅游" ;
                break;

        }
        cout << "总消费: " ;
        cin >> expense;
        sum += expense * 0.23;

    }
        cout << "税收总值约为： " << sum << endl;
        cout << "总税收比率为： " << (sum/salary)*100 << "%" << endl;


    return 0;
}
