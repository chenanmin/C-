/*
 * Filename:T2_20.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.09
 * Funtion: ����Բ�İ뾶�����Բ��ֱ�����ܳ������
*/


#include<iostream>

using namespace std;

int main()
{
    int r;
    const float PI=3.14159; //�е�ֵ

    cout << "please input the radius of a round" << endl;
    cin >> r;

    cout << "The diameter of the round is " << 2 * r <<endl;
    cout << "The circumference of the round is " << 2 * PI * r << endl;
    cout << "The area of the round is " << PI*r*r << endl;


    return 0;


}
