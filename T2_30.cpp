/*
 * Filename:T2_30.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.10
 * Funtion: 输入体重和身高，计算身体质量指数
*/

#include<iostream>

using namespace std;

int main()
{
    double high;
    double weigh;
    cout << "please input your height and weight" << endl;
    cin >> high >> weigh;

    double bmi;
    bmi=weigh/(high*high);
    if( bmi < 18.5 )
    {
        cout << "you are underweight" << endl;
    }else
        if( bmi < 24.9)
        {
            cout << "you are normal" << endl;
        }else
            if( bmi < 29.9 )
            {
                cout << "you are overweight" << endl;
            }else
                cout << "you are obese " << endl;




    return 0;
}
