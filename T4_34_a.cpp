 /*
 * Filename:T4_34_a.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.12
 * Funtion: ����һ���Ǹ�����������ʹ�ӡ���Ľ׳�
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int number = 0;
    int fac = 1;
    cout << "Enter a number: " ;
    cin >> number;

    while( number !=0 )
    {
        fac = fac * number;
        number = number - 1;

    }

    cout << "The factorial of the number is: " << fac << endl;



    return 0;
}
