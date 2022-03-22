 /*
 * Filename:T4_35.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.13
 * Funtion: 尝试列表、类的对象的初始化
*/


#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

//c
class Account
{
public:
    void getAccount(unsigned int a, string b, string c, double d)
    {
        unsigned int accountNumber = { a };
        string firstName = { b };
        string lastName =  { c };
        double balance = { d };

        cout << "The number is ： " << accountNumber << endl;
        cout << "The string1 is : " << firstName << endl;
        cout << "The string2 is : " << lastName << endl;
        cout << "The double is : " << balance << endl;

    }
};





int main()
{
    //a
    unsigned int studentCounter = { 0 };
    //b
    double initialBalance = { 1000.0 };
    //c
    unsigned int a = { 0 };
    string b ;
    string c ;
    double d = { 0 };

    cout << "Enter a number: " ;
    cin >> a ;
    cout << "Enter the  string: ";
    cin.ignore();
    getline( cin , b );

    cout << "Enter the string: ";
    getline( cin , c );
    cout << "Enter a double: ";
    cin >> d;



    Account account;
    account.getAccount(a,b,c,d);



    return 0;
}
