#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
float final(float nums[]) {
    int i, j;
    float temp;
    int length = 10;
    //�Ͻڿν�����ð�������㷨
    for (i = 0; i < length; ++i) {
        for (j = length - 1; j > i; --j) {
 
            if (nums[j] > nums[j - 1]) {
                temp = nums[j];
                nums[j] = nums[j - 1];
                nums[j - 1] = temp;
            }
        }
    }
    //����һ����СΪ6������
    float numss[6] = { 0 };
    //��ȥ����ǰ2�ͺ�2�����ֵ�������
    for (int i = 2; i < 8; i++)
        numss[i-2] = nums[i];
    //���
    float summ = 0;
    for (int i = 0; i < 6; i++)
        summ += numss[i];
    //����6�󷵻ؾ�ֵ������final1ͬ��
    return summ / 6;
}
float final1(float nums[]) {
    //ͬ�ϣ�ֻ������ȥ����1����ߺ�һ����ͣ���8��Ԫ��ȡ��ֵ���ѡ�
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
    //���ִ�������10λ��ί��Ϊÿλѡ�ִ�֣�double�ͣ���
    //Ԥ�����ָ��ֵķ�����Ϊȥ��1����߷֡�1����ͷֺ�����8��������ƽ��ֵ��
    //�������ָ��ֵķ�����Ϊȥ��2����߷֡�2����ͷֺ�����6��������ƽ��ֵ��
    //ͨ����������10λ��ί�Ĵ�֣��Լ���ǰ�����ĸ��׶Σ�Ԥ��������1��ʾ������������2��ʾ����
    //�������У�ֻ�����������ݡ����÷������㺯���������������ּ��㲿�ֱ�д����������ɡ�

    //���11���������� ����ǰʮ��Ϊ���� ��11��Ϊ���������
    float nums[11] = { 0 };
    for (int i = 0; i < 11; i++) {
        scanf("%f", &nums[i]);
    }
    //nkΪ������ʽ 1ΪԤ�� 2Ϊ����
    int nk = nums[10];

    //����һ��numssΪ10�������ļ���
    float numss[10] = { 0 };
    //����for�ķ�ʽ�����������(ǰʮ��Ԫ��)���뵽����numss��
    for (int i = 0; i < 10; i++)
        numss[i] = nums[i];
    //���nkΪ1=>nk-1=0ִ��final1()���� ����ִ��final����
    if ((nk - 1) == 0) {
        cout << final1(nums) <<endl;
    }
    else {
        cout << final(nums) << endl;
    }
    return 0;
}