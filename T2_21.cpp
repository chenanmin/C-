/*
 * Filename:T2_21.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.10
 * Funtion: ���ͼ�ξ��Σ���Բ�Σ���ͷ������
*/


#include<iostream>

using namespace std;

int main()
{
    for(int i = 0 ; i < 9 ;i++)     //�������
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


    for(int i = 0; i < 9 ; i++)     //�����Բ��
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



    //�����ͷ
    cout << "  *  " << endl;
    cout << " *** " << endl;
    cout << "*****" << endl;
    for(int i = 0 ;i < 5; i++)
    {
        cout << "  *  " << endl ;
    }
    cout << endl;



    //�������
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
