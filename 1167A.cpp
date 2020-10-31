#include <iostream>
using namespace std;
int main()
{
    // PROB: 编程实现：输入一个正整数，计算它的阶乘，并输出。
    //定义一个输入(int类型)
    int input; 
    //获取输入值
    cin >> input;
    //定义一个输出(long 长整型 防止因为输入过大计算阶乘时溢出)
    long output = 1;
    //计算阶乘(通过将i=0一直到i=input乘算到输出中实现阶乘效果)
    for (int i = 1; i <= input; i++) {
        output *= i;
    }
    //输出结果
    cout << output << endl;
}