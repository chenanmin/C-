 /*
 * Filename:T4_37.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.13
 * Funtion: 列出接下来75年的人口数，并判断哪一年是今年人口数的两倍
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    double population[75];
    double population0 = 78;
    static double rate = 0.0009;

    cout << "第_年\t\t" << "该年末的人口(亿人)\t" << "该年增加的人口数(亿人)" << endl;
    cout << "第" << 0 << "年\t\t" <<   population0 << "        \t\t" << 0 << endl;;
    int i = 0;
    population[0] = population0 * ( 1 + rate );
    cout << "第" << i+1 << "年\t\t" <<   population[i] << "        \t\t" << population[0] - population0 << endl;;
    while( i < 75 )
    {

        i++;
        population[i] = population[i-1] * ( 1 + rate );
        cout << "第" << i+1 << "年\t\t" <<   population[i] << "        \t\t" << population[i] - population[i-1] << endl;



    }

    int j = 0;
    double population1 = population0;
    while( population1 <= 2 * population0 )
    {
        population1 = population1  * ( 1 + rate );
        j++;
    }

    cout << "在第" << j+2021 << "年，世界人口是今年的两倍" << endl;
    return 0;
}
