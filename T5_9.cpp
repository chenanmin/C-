 /*
 * Filename:T5_9.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.13
 * Funtion: ���㲢��ӡ��1-15�������ĳ˻�
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int counter = 0;
    int mul = 1;

    for( counter = 1;counter <= 15;counter +=2 )
    {
        mul = mul * counter;

    }

    cout << "The product is : " << mul << endl;


    return 0;
}
