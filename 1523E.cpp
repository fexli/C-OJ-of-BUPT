#include<iostream>
#include<string.h>
#include<stdio.h> 
using namespace std;
const double pi = 3.14;
class Cirle {
public:
    double c(double r);
    double s(double r);
private:
    double r;

};
int main() {
    /*定义一个Cirle类，包括数据成员Radius（半径）和计算周长、面积的成员函数，
    并构造Cirle的对象进行测试。键盘输入半径，输出周长和面积值，中间用1个空格分隔，
    数据类型均为double，圆周率Pi=3.14。
    输入：5
    输出：周长31.4 面积78.5*/
    //因为题目没说创建类的对象，所以直接创建一个抽象类(虽然有对象r但是从来没使用过 删掉也可以)
    Cirle c;//获取类对象
    double rr;
    cin >> rr;//输入半径 double形式

    cout << "周长" << c.c(rr) << " 面积" << c.s(rr) << endl; //输出
    return 0;
}

double Cirle::c(double r)
{
    return 2 * pi * r; //求周长
}

double Cirle::s(double r)
{
    return pi * r * r; //求面积
}
