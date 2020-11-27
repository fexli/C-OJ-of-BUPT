#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    /*用字符指针数组，将给定的5个字符串（可以是任意5个国家名字）进行排序并输出。*/
    char* contry[5], * num; //生成5个关于城市的指针 和一个当前的指针(在交换函数中使用)
    char n[5][10]; //关于城市的二维字符组 5个城市名(第一个维度) 每个城市名10个字符(第二个维度)

    for (int i = 0; i < 5; i++)
    {
        cin >> n[i]; //获取输入
        contry[i] = n[i];//把当前城市维度存储到contry指针中
    }
    for (int i = 0; i < 5; i++) //遍历5个城市
    {
        for (int p = i + 1; p < 5; p++) // 将当前城市和后面的5-n个城市做排序 这样只需遍历一次就能完成排序
            for (int j = 0; j < 10; j++) //排序函数 按照第一位->第二位->..->第10位字母顺序排序
            {
                if (*(contry[i] + j) < *(contry[p] + j))//如果自己已经比后面小了 就停止(break代表打断for/while循环)
                    break;
                else if (*(contry[i] + j) > * (contry[p] + j))//判断城市i和j的的第j个字符大小 
                {
                    num = contry[i];
                    contry[i] = contry[p];
                    contry[p] = num;
                    break;
                }
                else//如果当前字符是一样的 就继续(continue是继续)
                    continue;
            }
        cout << contry[i] << endl; //遍历输出排序后的城市
    }
    return 0;
}
