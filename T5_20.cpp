 /*
 * Filename:T5_20.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.18
 * Funtion: 用for循环找寻三个数都不大于500的毕大哥拉斯三元组
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    int side1 = 0;
    int side2 = 0;
    int hypotenuse = 0;

    cout << setw(6) << "side1\t";
    cout << setw(6) << "side2\t";
    cout << setw(6) << "hypotenuse\t" << endl;

    for( side1 = 0; side1 <= 500; side1++)
    {
        for( side2 = side1; side2 <= 500 ;side2++)
        {
            for( hypotenuse = side1;hypotenuse <= 500 ; hypotenuse++)
            {

                if(hypotenuse >side1 && hypotenuse >side2)
                {

                    if((side1+side2 > hypotenuse) && (hypotenuse-side1 <side2) && (hypotenuse-side2 <side1) )
                    {
                        if((side1*side1+side2*side2)==(hypotenuse*hypotenuse))
                        {
                            cout << setw(6) << side1 << "\t";
                            cout << setw(6) << side2 << "\t";
                            cout << setw(6) << hypotenuse << "\t" << endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}
