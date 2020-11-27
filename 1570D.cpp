#include <iostream>
#include <math.h>
using namespace std;
void get_average(int a[8]) {
    int avb1 = 0; //定义一个平均值 初始化为0
    for (int i = 0; i < 8; i++) {//因为已知数组长度为8，就直接写就行了
        avb1 += a[i]; //求和
    }
    cout << avb1 / 8.0 << endl; //除以8求平均值
}
int main()
{
    /*编写一个函数get_average()获取整型数组元素的平均值。
    要求这个函数既可以用来求一维数组元素的平均值，
    编程实现这个函数。数组变量的值由键盘输入，输出平均值。*/
    int Array_1D[8] = { 0 };//创建一维数组并赋值
    for (int i = 0; i < 8; i++) {
        cin >> Array_1D[i]; //输入每个量
    }
    get_average(Array_1D); //使用函数显示
    return 0;
}
