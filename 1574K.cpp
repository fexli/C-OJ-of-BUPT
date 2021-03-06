#include<iostream>
#include<string.h>
#include<stdio.h> 

using namespace std;

int main() {
    /*利用指向行的指针变量求5×3数组各行元素之和*/
    int li[3][5];//初始化一个二维的数组 3代表3个元素 元素标是从0开始的 因此是0,1,2
    //其实二维和一维的区别就是后面又多了一个[](其实新的维度是在面前的那个框，也就是[3])
    //可以理解为我有一个数组A，但是这个数组里面存的不是数字int，而是数组B
    //而数组B里面存的才是int 数组B是一维的 数组A是二维的 就和 x=1 和 (x,y)=(1,1) 是一个道理
    for (int i = 0; i < 15; i++) {// 第一种方法 遍历15个变量 输入
        cin >> li[int(i / 5)][i % 5]; 
        //第一个是i/5求除数 第二个是i%5求余数 当i从0取到14时
        //i | int(i/5) | i%5
        //00|     0    |  0
        //01|     0    |  1
        //02|     0    |  2
        //03|     0    |  3
        //04|     0    |  4
        //05|     1    |  0
        //06|     1    |  1
        //07|     1    |  2
        //08|     1    |  3
        //09|     1    |  4
        //10|     2    |  0
        //11|     2    |  1
        //12|     2    |  2
        //13|     2    |  3
        //14|     2    |  4
        //这样就能把整个数组15个元素填满
    }
    int ttl = 0;//初始化总和为0
    for (int d = 0; d < 3; d++) {
        for (int v = 0; v < 5; v++) {//第二种方法 遍历15个变量(双重循环)
            ttl += li[d][v];//加和
        }
    }
    cout << ttl << endl;//输出·
}
