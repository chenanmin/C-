 /*
 * Filename:T5_14.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.16
 * Funtion: 计算和显示一家超市的所有售出产品的总零售额
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    int pro = 0;   //产品编号
    int sai;  //销售量
    double sum = 0;

    while( pro >= 0 && pro <= 5 )
    {
        cout << "Please enter  the product-number and sail-number: (当产品编号小于或者大于5时退出程序) ";
        cin >> pro >> sai;

        switch(pro)
        {
            case 1:     //产品1的价格为2.98美元
                {
                    sum += sai * 2.98;
                    break;
                }
            case 2:     //产品2的价格为4.50美元
                {
                    sum += sai * 4.50;
                    break;
                }
            case 3:     //产品3的价格为9.98美元
                {
                    sum += sai * 9.98;
                    break;
                }
            case 4:     //产品4的价格为4.49美元
                {
                    sum += sai * 4.49;
                    break;
                }
            case 5:     //产品5的价格为6.87美元
                {
                    sum += sai * 6.87;
                    break;
                }
        }


    }

    cout << "该超市的总零售额为: " << sum ;




    return 0;
}
