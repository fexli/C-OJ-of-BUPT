#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
 
int main() {
    //PROB:编写函数，把华氏温度F（double型）转换为摄氏温度C（double型）
    //公式为C=(F-32)/1.8。键盘输入一个华氏温度，可以得到相应的摄氏温度。
    //SAMPLE:(IN:32->OUT:0)
    //就直接照抄题干就行了 最简单的题目 没有之一
    //定义F华氏度（double双精度浮点）
    double F;
    //输入华氏度
    cin >> F;
    //定义摄氏度（double双精度浮点）
    //直接在右侧做一个转换，转换方式题目给了 原封不动照抄即可
    double C = (F - 32) / 1.8;
    //输出即可
    cout << C << endl;
}