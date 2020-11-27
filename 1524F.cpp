#include<iostream>
#include<string.h>
#include<stdio.h> 

using namespace std;
const double pi = 3.14;
class Jux {
    float w;//矩形的长度和宽度定义
    float h;
public:
    void setw(float w); //没用到 删掉可以
    void seth(float h);//没用到 删掉可以
    void set(float w, float h);//设定长度和宽度的函数
    float get();//获得面积


};
void compare(Jux j1, Jux j2, Jux j3) {
    float s1 = j1.get();
    float s2 = j2.get();
    float s3 = j3.get();
    if (s1 > s2 and s2 > s3) {
        cout << s1 << endl;
        return;
    }
    if (s2 > s3 and s2 > s1) {
        cout << s2 << endl;
        return;
    }
    if (s3 > s2 and s3 > s1) {
        cout << s3 << endl;
        return;
    }
}
int main() {
    /*定义一个矩形类，长和宽是它的属性，可以求出矩形的面积。
    定义一个比较函数，比较两个矩形的面积，把面积大的矩形对象作为引用来返回。
    主函数中定义两个矩形，它们的长、宽已知，分别为
        矩形1：长5.2、宽4.3，
        矩形2：长100、宽20。
    再由键盘输入一个矩形的长、宽。
    调用比较函数进行比较，找出面积大的矩形，输出其面积。
    输入：10 8
    输出：2000*/
    Jux jux1;//定义两个已知矩形
    Jux jux2;
    jux1.set(5.2, 4.3);
    jux2.set(10, 200);
    float w2, h2;
    cin >> w2 >> h2;
    Jux jux3;
    jux3.set(w2, h2);//定义未知矩形的形状
    compare(jux1, jux2, jux3);//对比函数 对比这三个矩形
    return 0;
}

void Jux::seth(float h)//没用到 删掉可以
{
    h = h;
}

void Jux::setw(float w)//没用到 删掉可以
{
    w = w;
}
void Jux::set(float w1, float h1)//设定矩形的长和宽
{
    w = w1;//左侧w是矩形private参数 右侧是传入的参数
    h = h1;
}

float Jux::get()
{
    return w * h;//返回矩形自己的长乘宽
}
