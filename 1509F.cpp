#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
 
int main() {
    //PROB:��д�������ѻ����¶�F��double�ͣ�ת��Ϊ�����¶�C��double�ͣ�
    //��ʽΪC=(F-32)/1.8����������һ�������¶ȣ����Եõ���Ӧ�������¶ȡ�
    //SAMPLE:(IN:32->OUT:0)
    //��ֱ���ճ���ɾ����� ��򵥵���Ŀ û��֮һ
    //����F���϶ȣ�double˫���ȸ��㣩
    double F;
    //���뻪�϶�
    cin >> F;
    //�������϶ȣ�double˫���ȸ��㣩
    //ֱ�����Ҳ���һ��ת����ת����ʽ��Ŀ���� ԭ�ⲻ���ճ�����
    double C = (F - 32) / 1.8;
    //�������
    cout << C << endl;
}