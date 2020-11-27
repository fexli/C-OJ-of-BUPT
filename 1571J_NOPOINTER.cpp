#include<iostream>
#include<string.h>
#include<stdio.h> 

using namespace std;
//void search(int* pa, int n, int* pmax, int* pflag) { } 不使用指针函数的用法，写在main里面
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
    for (int i = 0; i < 10; i++) {//遍历找到最大值
        if (li[i] > maxv) {
            maxv = li[i];
            ind = i + 1; //同时将当前最大值的位置存储
        }
    }
    cout << maxv << '\n' << ind << endl; //输出
}
