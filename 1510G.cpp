#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string> 
using namespace std;
//��һ������ ��������
int func1(int a, int b) {
    return a / b;
}
//�ڶ������� ����
int func2(int a, int b) {
    return a % b;
}
//���������� ��������
string func3() {
    //�������루����������ȡ
    int in;
    cin >> in;
    //����һ���յ��ַ�����Ϊ�������
    string opt = "";
    //��in>9��ʱ��(����2λ��)
    while (in > 9) {
        //����10������λ������� ��ǰ��ӿո���Ϊ����10���10����������ֵ�Ǵ���������� ������+= ֻ�������ַ�ʽ
        //��4562 ��һ����10Ϊ2 ��һ�γ�10Ϊ456 2�����Ҳ�
        //       �ڶ�����10Ϊ6 �ڶ��γ�10Ϊ45 6��2��� ����Ҫ�����·�ʽ
        opt = " " + to_string(func2(in, 10)) + opt;
        //����10�����������ִ���in��
        in = func1(in, 10);
    }
    //�������������1λ�� ֱ�Ӵ浽����࣬���ӿո�
    opt = to_string(in) + opt;
    return opt;
}
int main() {
    //PROB:��д�����������ֱ������������
    //  ����һ����������a��������b���̵��������֣�
    //  ����������������a��������b��������
    //  ���������ú���һ�ͺ�������ɷ���������λ�Ĺ��ܣ�
    //          ���������1��32767֮�����������ӡ��һ�����֣�
    //          ÿ�����ּ��һ�������磬���룺4562  �����4 5 6 2

    //����func3�����
    cout << func3() << endl;
    return 0;
}