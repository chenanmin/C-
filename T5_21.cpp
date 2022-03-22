 /*
 * Filename:T5_21.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.18
 * Funtion:
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

void select();




int main()
{
    int counter = 0;
    double salary = 0;
    int number;     //选择数
    select();
    cin >> number;

    while( number > 0 )
    {
        switch(number)
        {
            case 1:
                {
                    cout << "请输入你的固定工资： " ;
                    cin >> salary;
                    cout << "经理的本周工资是： " << salary << endl;
                    break;
                }
            case 2:
                {
                    cout << "请输入你的每小时固定工资： " ;
                    cin >> salary;
                    cout << "请输入你的工作时间： " ;
                    cin >> counter;
                    if( counter <= 40 )
                    {
                        salary = salary * counter;
                    }else
                    {
                        salary = salary * 40 + salary *(counter-40)*1.5;
                    }
                    cout << "小时工的本周工资为: " << salary << endl;
                    break;
                }
            case 3:
                {
                    cout << "请输入你的本周销售毛利: " ;
                    cin >> salary ;
                    salary = salary * 0.057 + 250;
                    cout << "佣金工的本周工资为： " << salary << endl;
                    break;
                }
            case 4:
                {
                    cout << "请输入你每件产品的固定金额：" ;
                    cin >> salary;
                    cout << "请输入你生产的产品件数： " ;
                    cin >> counter;
                    salary = salary * counter;
                    cout << "计件工的本周工资是： " << salary << endl;
                    break;
                }


        }
        select();
        cin >> number;
        cout << endl;

    }




    return 0;
}

void select()
{
    cout << "1---经理的工资计算" << endl;
    cout << "2---小时工的工资计算" << endl;
    cout << "3---佣金工的工资计算" <<endl;
    cout << "4---计件工的工资计算" <<endl;
    cout << "\t退出---输出0或者是负数" << endl;
    cout << "请输入操作码： " << endl;

}
