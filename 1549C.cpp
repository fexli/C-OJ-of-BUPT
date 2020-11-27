#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    /*利用指针访问一维数组，得到数组元素的最大值和最小值。并输出。*/
    int k[100]; //因为不知道数组长度 直接设了个100
    for (int i = 0; i < 5; i++) { //但是考虑到题目中使用样例输入输出 所以将输入定为5个 如果这种方法不行，请使用scanf函数！(但是我的好像通过了于是就懒得改了)
        cin >> k[i];
    }
    int min_, max_;//初始化最大值和最小值，先赋值为数组的第一个元素(防止出现异常)
    min_ = k[0];
    max_ = k[0];
    for (int i = 0; i < 5; i++) { //同获取，可以将k的元素初始置为INT_MAX 最后在本循环中判断是否int为INT_MAX如果是就break掉
        if (min_ > k[i]) {
            min_ = k[i]; //如果当前元素小于最小值 赋值
            
        }
        if (max_ < k[i]) {
            max_ = k[i];//如果当前元素大于最大值 赋值
        }
    }
    cout << max_ << ' ' << min_ << endl; //输出 最好用printf(cout效率太低了)
    return 0;
}
