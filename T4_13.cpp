/*
 * Filename:T4_13.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.11
 * Funtion: ����ÿ�γ�������ʻӢ�����ͼ����������㲢��ӡ�����γ���Ϊֹ�����м����ۺϼ����ÿ����Ӣ����
*/


/*
 *�Ķ������������whileѭ��������ʻӢ�����ͼ��������������ÿ����Ӣ����
 *α���룺
 *��ʼ����ʻ����Ϊ0
 *��ʼ��������Ϊ0
 *��ʼ����ʻ�ܾ���Ϊ0
 *��ʼ����������
 *��ʼ����ʱÿ����Ӣ����Ϊ0
 *��ʼ����ÿ����Ӣ����Ϊ0
 *
 *�����˳�ѭ�������Ϊ-1
 *ѭ����ʼ
 *  �����û�������ʻ���룬��ʻ����Ϊ-1ʱ�˳�ѭ��
 *  �����û����������
 *  �����ǰ�׶�ÿ����Ӣ����
 *  ����ܽ׶�ÿ����Ӣ����
 *
 *  �����û�������ʻ���룬��ʻ����Ϊ-1ʱ�˳�ѭ��
 *  �����û����������
 *  �����ǰ�׶�ÿ����Ӣ����
 *  ����ܽ׶�ÿ����Ӣ����
 *
 *  �����û�������ʻ���룬��ʻ����Ϊ-1ʱ�˳�ѭ��
 *  ������ʻ����Ϊ-1���˳�����
 *
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double dri=0;
    double gall=0;
    double mdri=0;
    double mgal=0;
    double mpg=0;
    double MPG=0;


    cout << "Enter miles driven(-1 to quit): " ;
    cin >> dri;

    while( dri != -1 )
    {

        cout << "Enter gallons used: " ;
        cin >> gall;

        mdri += dri;
        mgal += gall;

        mpg = dri/gall;
        MPG = mdri/mgal;

        cout << setprecision(6) << fixed;
        cout << "MPG this trip: " << mpg << endl;
        cout << "Total MPG : " << MPG <<endl;

        cout << endl;

        cout << "Enter miles driven(-1 to quit): " ;
        cin >> dri;

    }

    return 0;
}
