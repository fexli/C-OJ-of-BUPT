#include <iostream>
using namespace std;
int main()
{
    // PROB: 输入大于或等于100正整数，计算它的百位数，并输出。
    //定义一个输入(int类型)
    int input;
    //获取输入值
    cin >> input;
    //除以100以后 除以10取余
    // 123456 / 100=>1234(将百分位降到个位)
    // 1234 % 10 => 4(相当于获得个位数上的值，因为其余位通过%10都=0)
    int output = input / 100 % 10;
    //输出结果
    cout << output << endl;
}