 /*
 * Filename:T5_10.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.13
 * Funtion: ��1-5ÿ�������Ľ׳˲���ӡ����
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    int mul = 1;

    cout << "number\tfactorial" << endl;
    for(int i=1; i<=5;i++)
    {
        mul *= i;
        cout << i << "\t" << mul << endl;
    }





    long long pd = 1;
    for(int i=1;i<=20;i++)  //20�Ľ׳����ݹ���int��long���ͻ����
    {
        pd *= i;
    }
    cout << "20�Ľ׳�Ϊ�� " << pd << endl;

    return 0;
}
