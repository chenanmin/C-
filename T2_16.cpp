/*
 * Filename:T2_16.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.09
 * Funtion: 输入两个数，输出两个数的和差积商
*/



#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int sum;
    int mul;
    int sub;
    int div;

    cout << "please input two numbers" <<endl;
    cin >> a >> b ;

    sum=a+b;
    mul=a*b;
    sub=a-b;
    div=a/b;

    cout << "a+b=" << sum <<endl;
    cout << "a*b=" << mul <<endl;
    cout << "a-b=" << sub <<endl;
    cout << "a/b=" << div <<endl;




    return 0;
}
