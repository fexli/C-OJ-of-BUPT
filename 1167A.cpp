#include <iostream>
using namespace std;
int main()
{
    // PROB: ���ʵ�֣�����һ�����������������Ľ׳ˣ��������
    //����һ������(int����)
    int input; 
    //��ȡ����ֵ
    cin >> input;
    //����һ�����(long ������ ��ֹ��Ϊ����������׳�ʱ���)
    long output = 1;
    //����׳�(ͨ����i=0һֱ��i=input���㵽�����ʵ�ֽ׳�Ч��)
    for (int i = 1; i <= input; i++) {
        output *= i;
    }
    //������
    cout << output << endl;
}