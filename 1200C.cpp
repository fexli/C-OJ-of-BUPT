#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
    //PROB:输入若干个数，第一个数为正整数，是求平均值的数的个数，其他数为浮点数，计算浮点数的平均值并输出。
    //SAMPLE:(IN:2 30 50->OUT:40)(IN:3 20 30 50->OUT:33.3333)
    //初始化变量p为总数(输入的第一个数)
    int p = 0;
    //获取输入的第一个数(空格隔开的)
    cin >> p;
    //初始化一个浮点类型的总数ttl和临时变量temp(用于存放一个输入的浮点数并加到总数中)
    float ttl = 0;
    float temp = 0;
    // 获取p次输入(p是求平均值的数的个数)使用for循环完成
    for (int i = 0; i < p; i++) {
        cin >> temp;
        //将获取到的数字加到总数中
        ttl += temp;
    }
    //输出总数/总个数 完成取平均值
    cout << ttl / p << endl;
}