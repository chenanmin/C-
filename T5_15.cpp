 /*
 * Filename:T5_15.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.16
 * Funtion: 计算并打印一组成绩的平均成绩
*/


#include<iostream>
#include<iomanip>
#include <cmath>
#include <string>

#define EOF -1
using namespace std;

int main()
{
    int grade = 0;
    int counter = 0;
    double average = 0.0;

    cout << "Enter the letter grades." <<endl;
    cout << "Enter the EOF character to end input." << endl;

    while( (grade = cin.get()) != EOF)
    {
        switch( grade )
        {
            case 'A':
            case 'a':
                average +=4;
                counter++;
                break;
            case 'B':
            case 'b':
                average +=3;
                counter++;
                break;
            case 'C':
            case 'c':
                average +=2;
                counter++;
                break;
            case 'D':
            case 'd':
                average +=1;
                counter++;
                break;
            case 'F':
            case 'f':
                average +=0;
                counter++;
                break;
            case '\n':
            case '\t':
            case ' ':
                break;
            default:
                cout << "Incorrecte letter grade entered."
                    <<"Enter a new grade." << endl;
                break;
        }
    }

    cout << "The average is : " << average/counter;

    return 0;
}
