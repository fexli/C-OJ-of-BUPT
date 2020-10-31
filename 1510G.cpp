#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string> 
using namespace std;
//第一个函数 求商整数
int func1(int a, int b) {
    return a / b;
}
//第二个函数 求余
int func2(int a, int b) {
    return a % b;
}
//第三个函数 分离整数
string func3() {
    //定义输入（整数）并获取
    int in;
    cin >> in;
    //定义一个空的字符串，为最终输出
    string opt = "";
    //当in>9的时候(至少2位数)
    while (in > 9) {
        //求余10，将个位数字输出 在前面加空格，因为是余10后除10，因此输出的值是从右往左输出 不能用+= 只能用这种方式
        //如4562 第一次余10为2 第一次除10为456 2在最右侧
        //       第二次余10为6 第二次除10为45 6在2左侧 所以要用以下方式
        opt = " " + to_string(func2(in, 10)) + opt;
        //除以10，将整数部分存在in内
        in = func1(in, 10);
    }
    //最后留下来的是1位数 直接存到最左侧，不加空格
    opt = to_string(in) + opt;
    return opt;
}
int main() {
    //PROB:编写三个函数，分别完成如下任务：
    //  函数一，计算整数a除以整数b的商的整数部分；
    //  函数二，计算整数a除以整数b的余数；
    //  函数三，用函数一和函数二完成分离整数各位的功能，
    //          对于输入的1～32767之间的整数，打印出一列数字，
    //          每个数字间空一个格。例如，输入：4562  输出：4 5 6 2

    //调用func3并输出
    cout << func3() << endl;
    return 0;
}