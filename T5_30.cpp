 /*
 * Filename:T5_30.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: ��������ȫ���ů�Ķ�ѡ���ԣ����ڻش������������ۡ�
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    int counter = 0;
    int select = 0;
    cout << "�����ǹ���ȫ���ů��һЩ��ѡ���⣬������ս�£��������ܹ�����ȫ���ů�ж����˽�ɡ�" << endl;
    cout << "��һ��.��������̼�⣬���顢�����⡢CO�ȶ�����Ϊ�������壬�䲻�ǹ�ͬ��ԭ���ǣ���" << endl;
    cout << "1.����̫�����䣬ʹ�������¡�\t2.ͨ���⻯ѧ��Ӧ��������ͷ�����\n"
        << "3.ǿ�����յ���ų��ĺ����߳�������\t4.���������໥��Ӧ�ų�����\n";
    cout << "��������ѡ��";
    cin >> select;
    if( select == 124 )
    {
        cout << "�ش���ȷ��" << endl;
        counter++;
    }else
        cout << "�ش����" << endl;

    cout << "�����������ȫ���ů����������ȷ���ǣ�\n";
    cout << "1.���ǰѾ��һ������������仯��Ϊ��������仯" << endl;
    cout << "2.����仯ָ��ů�仯����������ʪ�仯" << endl;
    cout << "3.����仯�ǳ�ʱ�ڴ���״̬�仯��һ�ַ�ӳ" << endl;
    cout << "4.��������ȫ�������ڲ����½�" << endl;
    cout << "���������ѡ�� " ;
    cin >> select;
    if(select == 124)
    {
        cout << "�ش���ȷ��" <<endl;
        counter++;
    }else
    {
        cout << "�ش����" << endl;
    }

    cout << "�����������й��ڼ������������ŷ����Ĵ�ʩ����ȷ���ǣ�" << endl;
    cout << "1.������Դ���ѽṹ��\t2.�����Դ������\n";
    cout << "3.��ǿ���ʺ�����\t4.ȫ�����������ҵ����\n";
    cout << "���������ѡ��" ;
    cin >> select;
    if(select == 123)
    {
        cout << "�ش���ȷ��" <<endl;
        counter++;
    }else
        cout << "�ش����" << endl;

    cout << "�����ģ�ȫ�������ů���˻�����ƽ�������⣬��������Ļ����仯�У� " << endl;
    cout << "1.��γ���´��������ů������ǿ�ң�����øɺ���\n";
    cout << "2.����ũҵ������������˻�Ϊ��ԭ��" << endl;
    cout << "3.��γ�ȵ��������ů����ˮ���ӣ���������´�����������" << endl;
    cout << "4.���ں�ˮ������ʢ��ȫ��ˮ������������ӡ�" << endl;
    cout << "���������ѡ�� " ;
    cin >> select;
    if(select == 123)
    {
        cout << "�ش���ȷ��" <<endl;
        counter++;
    }else
        cout << "�ش����" << endl;

    cout << "�����壺Ϊ��������ġ����ҡ������������룬����Ϊ����ŵ��ǣ� " <<endl;
    cout << "1.���ģֲ�����֣�����ֲ�������ʡ�\t2.�ѡ��������塱Һ���������ʯ�С�" << endl;
    cout << "3.ʹ�û��򹤳���ֲ�����ĺ���ͺ��ݣ������ա��������塱��\t4.�˹��������Ӵ���ʪ�ȡ�" << endl;
    cout << "���������ѡ�� " ;
    cin >> select;
    if(select == 123)
    {
        cout << "�ش���ȷ��" <<endl;
        counter++;
    }else
        cout << "�ش����" << endl;

    switch(counter)
    {
        case 5:
            cout << "Excellent" << endl;
            break;
        case 4:
            cout << "Very good" << endl;
            break;
        default:
            cout << "Time to brush up on your knowledge of global warming" << endl;
            cout << "������Դ��վΪ��https://wenku.baidu.com/view/14e54bf0376baf1ffc4fadf7.html" << endl;
            break;
    }



    return 0;
}
