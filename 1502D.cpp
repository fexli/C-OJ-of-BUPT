#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    //PROB:ĳ�ֿ⹲��ABCDE���ֻ��ÿ����Ҫ������������ͬ��
    // ÿ�ֻ���ĵ��۲�ͬ��������ʾ���ɼ����������ֻ�����Ҫ��
    // �������������������ղֿ���֧�����ٻ�����ڲ���ʱ��
    // һ������ABCDE��˳�򲹻�������ʹ��switch�����ѭ������д��
    // ��������  ���ﵥ��
    //    A          10
    //    B          5
    //    C          3
    //    D          20
    //    E          13
    // B 3 E 2 A 1 D 4 C 10
    //����һ���ַ� ������ȡ�����ǰ��Ĳֿ�����(ABCDE����һ��)
    char ch;
    //��ʼ��һ�������������ÿ���ֿ����ж�����Ʒ����ʼֵΪ0��������{0}
    int arr[5] = { 0 };
    int n, SUM = 0, sum;
    //��Ϊһ����5���ֿ� ����forѭ��5��
    for (int i = 1; i <= 5; i++)
    {
        //Сsum�����μӺ͵���ʱ�Ӻ�ֵ
        sum = 0;
        //��ȡ����Ĳֿ���(�洢��ch)������(�洢��n)
        cin >> ch;
        cin >> n;
        //��Ŀ˵switch���ã��Ǿ���switch
        //�ǵ�дcase����Ҫ��break
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
        //n�����ֹ���ⷢ��
        n = 0;
        //��SUM�����������вֿ���ܺ�ֵ
        SUM += sum;
    }
    //����ܺ�(��SUM)
    cout << SUM << endl;
}