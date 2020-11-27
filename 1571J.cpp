#include<iostream>
#include<string.h>
#include<stdio.h> 

using namespace std;
void search(int pa[10], int n, int* pmax, int* pflag) {
    //在函数定义中使用*获取到指针实际内存地址
    //因此在函数内部使用时可以直接修改函数外部对应变量的值
    //不需要重新进行赋值
    for (int i = 0; i < 10; i++) {
        if (pa[i] > *pmax) {//pa[i]代表数组中第i个数字 而*pmax代表获取pmax这个指针所在内存对应的int数据值
            //下面*pmax = pa[i]会将pmax对应内存的值直接修改为pa[i]的值，达到直接赋值的效果
            *pmax = pa[i];
            *pflag = i + 1;
        }
    }
}
int main() {
    /*从键盘上输入10个数据到一维数组中，
    然后找出数组中的最大值和该值所在的元素序号（从1开始）。 
    要求调用子函数search(int *pa,int n,int *pmax,int *pflag)完成，
    数组名作为实参， 指针作为形参，最大值和序号在形参中以指针的形式返回。*/
    int li[10]; 
    for (int i = 0; i < 10; i++) {//输入10个数字
        cin >> li[i];
    }
    int ind = 1;
    int maxv = li[0];//初始化最大值是数组第一个数
    search(li, 0, &maxv, &ind);//这里'&'是取地址的方式，将这些变量的实际地址作为指针传入函数中
    cout << maxv << '\n' << ind << endl; //输出
}
