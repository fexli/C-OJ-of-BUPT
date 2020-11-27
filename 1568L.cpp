#include<iostream>
#include<string.h>
#include<stdio.h> 
using namespace std;
int main()
{
    /*用指针编写一个程序，当输入一个字符串后，
    要求不仅能够统计其中字符的个数，
    还能分别指出其中大、小写字母、数字以及其他字符的个数。*/
    //题目中说要求出<大写字母><小写字母><数字><其他字符><总和>
    //所以我们就定义这些的数量就行
    int u = 0, l = 0, n = 0, others = 0, sum = 0;
    //<u=大写字母><l=小写字母><n=数字><others=其他字符><sum=总和>
    int i = 0;
    char s[100] = "";//设定一句话最长的长度为100 因为初始化字符串内容为空
    //所以所有这100个字符都会被填充为'\0'    <<<这一点很重要>>>
    cin.getline(s, 100, '\n');
    //用cin.getline方式获取整行内容
    //cin.getline(char *char_list, int length, char final_str)
    //char_list为一维字符组，length为字符组的长度(或者你想存入的最大长度) final_str为结束字符

    while (s[i] != '\0') //'\0'为字符串的结尾符当s的第i位字符不是结尾符 说明字符串未结束
    {
        if (s[i] >= 'A' and s[i] <= 'Z')//直接字符的判断就可以 会根据ascii表去判断大小
        {
            u++;
        }
        else if (s[i] >= 'a' and s[i] <= 'z')//同上
        {
            l++;
        }
        else if (s[i] > '0' and s[i] < '9')//同上
        {
            n++;
        }
        else//上面三个都不属于的 就属于其他的字符
        {
            others++;
        }
        sum++;//总和+1
        i++;
    }
    cout << u << '\n' << l << '\n' << n << '\n' << others << '\n' << sum << endl;//按照题目要求格式输出
    return 0;
}
