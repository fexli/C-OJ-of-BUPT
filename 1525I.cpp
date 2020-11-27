#include<iostream>
#include<string.h>
#include<stdio.h> 

using namespace std;

class Tri {
public:
    void check(int, int, int);//也是没啥用的抽象类，主要封装了一个check函数
};

int main() {
    Tri tri;
    int a, b, c;
    cin >> a >> b >> c;
    tri.check(a, b, c);
    return 0;
}

void Tri::check(int a, int b, int c)
{
    if (a + b > c and a + c > b and b + c > a) {//简单的判断
        //是三角形->是直角三角形？
        //是三角形->是等腰三角形？->是等边三角形？
        //不是三角形
        // Tri
        bool ri = false;
        if (a * a + b * b == c * c or a * a + c * c == b * b or c * c + b * b == a * a) {
            cout << "A right triangle" << endl;
            ri = true;
        }
        if (a == b or b == c or c == a) {
            //deng yao
            if (a == b and b == c) {
                //deng bian
                cout << "A equileteral triangle" << endl;
                return;
            }
            cout << "A isosceles triangle" << endl;
            return;
        }
        if (!ri) {
            cout << "A triangle" << endl;
        }
        return;
    }
    cout << "Not a triangle" << endl;
    return;
}
