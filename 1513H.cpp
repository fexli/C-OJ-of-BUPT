#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
float final(float nums[]) {
    int i, j;
    float temp;
    int length = 10;
    //上节课讲到的冒泡排序算法
    for (i = 0; i < length; ++i) {
        for (j = length - 1; j > i; --j) {
 
            if (nums[j] > nums[j - 1]) {
                temp = nums[j];
                nums[j] = nums[j - 1];
                nums[j - 1] = temp;
            }
        }
    }
    //创建一个大小为6的数组
    float numss[6] = { 0 };
    //将去除掉前2和后2的评分导入数组
    for (int i = 2; i < 8; i++)
        numss[i-2] = nums[i];
    //求和
    float summ = 0;
    for (int i = 0; i < 6; i++)
        summ += numss[i];
    //除以6后返回均值，下面final1同理
    return summ / 6;
}
float final1(float nums[]) {
    //同上，只不过是去除了1个最高和一个最低，将8个元素取均值而已。
    int i, j;
    float temp;
    int length = 10;
    for (i = 0; i < length; ++i) {
        for (j = length - 1; j > i; --j) {
 
            if (nums[j] > nums[j - 1]) {
                temp = nums[j];
                nums[j] = nums[j - 1];
                nums[j - 1] = temp;
            }
        }
    }
    float numss[8] = { 0 };
    for (int i = 1; i < 9; i++)
        numss[i - 1] = nums[i];
    float summ = 0;
    for (int i = 0; i < 8; i++)
        summ += numss[i];
    return summ / 8;
}
int main() {
    //歌手大奖赛共有10位评委，为每位选手打分（double型）。
    //预赛部分歌手的分数，为去掉1个最高分、1个最低分后其余8个分数的平均值；
    //决赛部分歌手的分数，为去掉2个最高分、2个最低分后其余6个分数的平均值。
    //通过键盘输入10位评委的打分，以及当前处于哪个阶段（预赛部分用1表示，决赛部分用2表示）。
    //主函数中，只负责输入数据、调用分数计算函数、输出结果，评分计算部分编写独立函数完成。

    //获得11个输入数据 其中前十个为评分 第11个为决赛或初赛
    float nums[11] = { 0 };
    for (int i = 0; i < 11; i++) {
        scanf("%f", &nums[i]);
    }
    //nk为比赛方式 1为预赛 2为决赛
    int nk = nums[10];

    //创建一个numss为10个分数的集合
    float numss[10] = { 0 };
    //利用for的方式将输入的评分(前十个元素)导入到数组numss中
    for (int i = 0; i < 10; i++)
        numss[i] = nums[i];
    //如果nk为1=>nk-1=0执行final1()函数 否则执行final函数
    if ((nk - 1) == 0) {
        cout << final1(nums) <<endl;
    }
    else {
        cout << final(nums) << endl;
    }
    return 0;
}