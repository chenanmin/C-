 /*
 * Filename:T5_14.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.16
 * Funtion: �������ʾһ�ҳ��е������۳���Ʒ�������۶�
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    int pro = 0;   //��Ʒ���
    int sai;  //������
    double sum = 0;

    while( pro >= 0 && pro <= 5 )
    {
        cout << "Please enter  the product-number and sail-number: (����Ʒ���С�ڻ��ߴ���5ʱ�˳�����) ";
        cin >> pro >> sai;

        switch(pro)
        {
            case 1:     //��Ʒ1�ļ۸�Ϊ2.98��Ԫ
                {
                    sum += sai * 2.98;
                    break;
                }
            case 2:     //��Ʒ2�ļ۸�Ϊ4.50��Ԫ
                {
                    sum += sai * 4.50;
                    break;
                }
            case 3:     //��Ʒ3�ļ۸�Ϊ9.98��Ԫ
                {
                    sum += sai * 9.98;
                    break;
                }
            case 4:     //��Ʒ4�ļ۸�Ϊ4.49��Ԫ
                {
                    sum += sai * 4.49;
                    break;
                }
            case 5:     //��Ʒ5�ļ۸�Ϊ6.87��Ԫ
                {
                    sum += sai * 6.87;
                    break;
                }
        }


    }

    cout << "�ó��е������۶�Ϊ: " << sum ;




    return 0;
}
