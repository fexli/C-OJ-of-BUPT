#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//其实没必要加这么多include，但是为了防止出问题我就在所有程序里都加了这么多include(懒得改)
int main() {
    //PROB:某仓库共有ABCDE五种货物，每天需要补货的数量不同，
    // 每种货物的单价不同，如下所示。由键盘输入五种货物需要补
    // 货的数量，请计算出当日仓库需支付多少货款。由于补货时不
    // 一定按照ABCDE的顺序补货，建议使用switch语句与循环语句编写。
    // 货物名称  货物单价
    //    A          10
    //    B          5
    //    C          3
    //    D          20
    //    E          13
    // B 3 E 2 A 1 D 4 C 10
    //定义一个字符 用来获取输入的前面的仓库名称(ABCDE其中一个)
    char ch;
    //初始化一个数组用来存放每个仓库中有多少物品，初始值为0个所以用{0}
    int arr[5] = { 0 };
    int n, SUM = 0, sum;
    //因为一共有5个仓库 所以for循环5次
    for (int i = 1; i <= 5; i++)
    {
        //小sum代表本次加和的临时加和值
        sum = 0;
        //获取输入的仓库名(存储到ch)和数量(存储到n)
        cin >> ch;
        cin >> n;
        //题目说switch好用，那就用switch
        //记得写case后面要加break
        switch (ch)
        {
        case 'A':
            sum = 10 * n;
            break;
        case 'B':
            sum = 5 * n;
            break;
        case 'C':
            sum = 3 * n;
            break;
        case 'D':
            sum = 20 * n;
            break;
        case 'E':
            sum = 13 * n;
            break;
        }
        //n归零防止意外发生
        n = 0;
        //大SUM代表最终所有仓库的总和值
        SUM += sum;
    }
    //输出总和(大SUM)
    cout << SUM << endl;
}
