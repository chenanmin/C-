 /*
 * Filename:T5_32.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: 在固定增长率下，何时FaceBook的用户达到25亿。
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    double users = 10.0;
    double current = 10.0;
    double rate ;
    int counter = 0;
    for ( rate = 0.02 ; rate <= 0.05;rate += 0.01)
    {
        cout << "增长率为" << rate*100 << "%时：" << endl;
        users = 10.0;
        counter = 0;
        cout << "Year" << setw(21) << "Current Population" << endl;
        while( users < 25 )
        {
            users = current * pow( 1 + rate , counter );
            cout << "第" << counter << "年\t" << users << endl;
            counter++;
        }
        cout << "第" << counter-1 << "年后FaceBook用户达到25亿" << endl;

    }

    return 0;
}
