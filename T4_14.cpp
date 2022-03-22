/*
 * Filename:T4_14.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: 判断商场顾客的支付款额是否超出了赊欠账户的信用额度
*/


/*
 *阅读问题陈述：用while循环输入客户信息，计算新的欠款，并判断新的欠款是否超过客户的信用额度
 *伪代码：
 *初始化账号为0
 *初始化月初欠款为0
 *初始化该月购买的总金额为0
 *初始化该月账户存入的总金额为0
 *初始化允许信用额度为0
 *
 *
 *设置退出循环标记数为-1
 *循环开始
 *  提醒用户输入账号，账号为-1时退出循环
 *  提醒用户输入月初欠款
 *  提醒用户输入该月购买的总金额
 *  提醒用户输入该月存入的总金额
 *  提醒用户输入允许的信用额度
 *  判断新的欠款是否超额
 *  若超额则如下显示
 *  输出新的欠款
 *  输出账户
 *  输出账户的信用额度
 *  输出新的欠款
 *  提醒用户超额
 *  若没有超额
 *  则输出新的欠款
 *
 *
 *
 *
 *  提醒用户输入账号，账号为-1时退出循环
 *  账号为-1，退出循环
 *
 *
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int account = 0;
    double balance = 0;
    double charge = 0;
    double credit = 0;
    double limit = 0;

    cout << "Enter account number (or -1 to quit): " ;
    cin >> account;

    while(account != -1)
    {
        cout << "Enter begining balance: " ;
        cin >> balance;
        cout << "Enter total charges: ";
        cin >> charge;
        cout << "Enter total credits: ";
        cin >> credit;
        cout << "Enter credit limit: ";
        cin >> limit;

        balance = balance + charge - credit;
        cout << "New balance is " << balance << endl;
        if( balance > limit )
        {
            cout << "Account:   " << account << endl;
            cout << setprecision(2) << fixed;
            cout << "Credit limit:  " << limit << endl;
            cout << "Balance:    " << balance << endl;
            cout << "Credit Limit Exceeded." << endl;
        }

        cout << endl;

        cout << "Enter account number (or -1 to quit): " ;
        cin >> account;

    }



    return 0;
}
