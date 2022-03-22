 /*
 * Filename:T5_12.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.16
 * Funtion: 使用嵌套的for循环绘制图案
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;

    for(int i=10;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;


    for(int i=1;i<=10;i++)
    {
        for(int j=i-1;j>0;j--)
        {
            cout << " ";
        }

        for(int j=11-i;j>0;j--)
        {
            cout << "*";
        }

        cout << endl;

    }

    cout << endl;
    for(int i=1;i<=10;i++)
    {
        for(int j=10-i;j>0;j--)
        {
            cout << " ";
        }

        for(int j=i;j>0;j--)
        {
            cout << "*";
        }

        cout << endl;

    }



    return 0;
}
