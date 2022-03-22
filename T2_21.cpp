/*
 * Filename:T2_21.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.10
 * Funtion: 输出图形矩形，椭圆形，箭头，菱形
*/


#include<iostream>

using namespace std;

int main()
{
    for(int i = 0 ; i < 9 ;i++)     //输出矩形
    {
        if(i == 0  || i == 8)
        {
            cout << "*********" << endl;
        }else
        {
            cout << "*       *" << endl;
        }
    }
    cout << endl;


    for(int i = 0; i < 9 ; i++)     //输出椭圆形
    {
        if(i == 0 || i == 8)
        {
            cout << "   ***   " << endl;
        }else
        {
            if(i == 1 || i == 7)
            {
                cout << " *     * " << endl;
            }else
            {
                cout << "*       *" << endl;
            }

        }
    }
    cout << endl;



    //输出箭头
    cout << "  *  " << endl;
    cout << " *** " << endl;
    cout << "*****" << endl;
    for(int i = 0 ;i < 5; i++)
    {
        cout << "  *  " << endl ;
    }
    cout << endl;



    //输出菱形
    cout << "    *    " << endl;
    cout << "   * *   " << endl;
    cout << "  *   *  " << endl;
    cout << " *     * " << endl;
    cout << "*       *" << endl;
    cout << " *     * " << endl;
    cout << "  *   *  " << endl;
    cout << "   * *   " << endl;
    cout << "    *    " << endl;

    return 0;
}
