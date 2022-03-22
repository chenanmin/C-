 /*
 * Filename:T5_30.cpp
 * Author: anmin chen
 * E-mail: 2605909457@qq.com
 * Date: 2022.3.20
 * Funtion: 创建关于全球变暖的多选测试，并在回答问题后给予评价。
*/


#include<iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
    int counter = 0;
    int select = 0;
    cout << "以下是关于全球变暖的一些多选问题，快来挑战下，看看你能够对于全球变暖有多少了解吧。" << endl;
    cout << "第一题.除二氧化碳外，甲烷、氟氯氢、CO等都被称为温室气体，其不是共同的原因是（）" << endl;
    cout << "1.吸收太阳辐射，使大气增温。\t2.通过光化学反应向大气中释放能量\n"
        << "3.强烈吸收地面放出的红外线长波辐射\t4.温室气体相互反应放出能量\n";
    cout << "请输出你的选择：";
    cin >> select;
    if( select == 124 )
    {
        cout << "回答正确！" << endl;
        counter++;
    }else
        cout << "回答错误" << endl;

    cout << "问题二：关于全球变暖的叙述不正确的是：\n";
    cout << "1.人们把距今一万年来的气候变化称为近代气候变化" << endl;
    cout << "2.气候变化指冷暖变化，不包括干湿变化" << endl;
    cout << "3.气候变化是长时期大气状态变化的一种反映" << endl;
    cout << "4.近百年来全球气温在不断下降" << endl;
    cout << "请输入你的选择： " ;
    cin >> select;
    if(select == 124)
    {
        cout << "回答正确！" <<endl;
        counter++;
    }else
    {
        cout << "回答错误" << endl;
    }

    cout << "问题三：下列关于减少温室气体排放量的措施，正确的是：" << endl;
    cout << "1.调整能源消费结构。\t2.提高能源利用率\n";
    cout << "3.加强国际合作。\t4.全球大量消减工业生产\n";
    cout << "请输入你的选择：" ;
    cin >> select;
    if(select == 123)
    {
        cout << "回答正确！" <<endl;
        counter++;
    }else
        cout << "回答错误" << endl;

    cout << "问题四：全球气候变暖除了会引起海平面升高外，还会引起的环境变化有： " << endl;
    cout << "1.中纬度温带地区因变暖后蒸发强烈，而变得干旱。\n";
    cout << "2.现在农业发达地区将会退化为草原。" << endl;
    cout << "3.高纬度地区会因变暖而降水增加，变得适宜温带作物生长。" << endl;
    cout << "4.由于海水蒸发旺盛，全球降水量将会大量增加。" << endl;
    cout << "请输入你的选择： " ;
    cin >> select;
    if(select == 123)
    {
        cout << "回答正确！" <<endl;
        counter++;
    }else
        cout << "回答错误" << endl;

    cout << "问题五：为消除地球的“温室”现象，下列设想，你认为最不可信的是： " <<endl;
    cout << "1.大规模植树造林，增加植被覆盖率。\t2.把“温室气体”液化输入深海岩石中。" << endl;
    cout << "3.使用基因工程培植大量的海藻和海草，来吸收“温室气体”。\t4.人工降雨增加大气湿度。" << endl;
    cout << "请输入你的选择： " ;
    cin >> select;
    if(select == 123)
    {
        cout << "回答正确！" <<endl;
        counter++;
    }else
        cout << "回答错误" << endl;

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
            cout << "试题来源网站为：https://wenku.baidu.com/view/14e54bf0376baf1ffc4fadf7.html" << endl;
            break;
    }



    return 0;
}
