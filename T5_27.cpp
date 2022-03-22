 /*
 * Filename:T5_27.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: 用结构化语言去除continue。
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    for ( unsigned int count = 1; count <= 10; ++count )
    {
        if( count == 5 )
        {
            count = count + 1;

        }
        cout << count << " ";
    }

    cout << "\nUsed continue to skip printing 5 " << endl;


    return 0;
}
