#include<iostream>
#include<string.h>
#include<stdio.h> 

using namespace std;

class Timecls {
private://类内部的量
    int year;
    int min;
    int day;
    bool typ_;//这里用的是bool类型，因此将判断放在了主函数中
public:
    Timecls(int, int, int, bool); //重载函数定义
    void print();//输出函数定义
};

int main() {
    /*定义一个时间类，数据成员包括年、月、日，它的函数成员分别可以设置时间、显示时间，其中显示时间的函数，使用重载函数定义，遇到整型数值，则返回2017-5-30的格式，遇到浮点型数值，则输出2017年5月30日的格式。
    输入：2017 5 30 1.1
    输出：2017年5月30日*/
    int y, m, d;
    float is_;//这里先定义一个float类型(精度比int高)的变量 负责存放无论输入的是什么类型的数
    char isss[10];
    cin >> y >> m >> d;//先获取年月日
    cin.get(isss, 10, '\n');//然后获取最后的数 注意！！！这里用字符组的形式存储
    float iss = false;//我的判断方法很简单，先认为最后输入的是整形(iss=false)
    //如果输入的数里面有 '.' 那么就认定输入的为浮点数
    //防止出现将1.0识别为整数的情况发生
    for (int i = 0; i < 10; i++) {//遍历字符组 如果 字符是'.'则认为数浮点
        if (isss[i] == '.') {
            iss = true;
        }
    }
    bool bb = iss;
    Timecls t(y, m, d, bb);//定义一个Timecls类型时间类
    t.print();//输出信息
    return 0;
}

Timecls::Timecls(int y, int m, int d, bool i)
{
    year = y;
    min = m;
    day = d;
    typ_ = i;
}

void Timecls::print()//简单的判断输出
{
    if (typ_) {
        cout << year << "年" << min << "月" << day << "日" << endl;
    }
    else {
        cout << year << "-" << min << "-" << day << endl;
    }
}
