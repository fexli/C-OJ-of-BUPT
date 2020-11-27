#include<iostream>
#include<string.h>
#include<stdio.h> 

using namespace std;

class Employee {
public:
    Employee(string, int, int, int, int); //重载函数
    void getInfo(int, int);
private:
    string name;
    int earn;
    int y;
    int m;
    int d;
};

int main() {
    /*"wang",5000,2000,10,23
    2,"liu",4500,2008,1,20
    3,"huo",3800,2003,7,3
    4,"ma",5300,2015,4,10
    5,"meng",6000,2016,3,16*/
    Employee e1("wang", 5000, 2000, 10, 23);
    Employee e2("liu", 4500, 2008, 1, 20);
    Employee e3("huo", 3800, 2003, 7, 3);
    Employee e4("ma", 5300, 2015, 4, 10);
    Employee e5("meng", 6000, 2016, 3, 16);
    //定义五个员工
    Employee* EMP[5] = { &e1,&e2,&e3,&e4,&e5 }; 
    //定义一个Employee类型指针组，将上面那些员工的内存地址存到这个数组中
    //我们直接访问这个数组的元素就可以获取到上面那些已经定义的员工
    int ind, year, mon;
    cin >> ind >> year >> mon;
    EMP[ind - 1]->getInfo(year, mon);
    //获取指定员工的内存地址 并使用指针指向员工类的getInfo函数
    return 0;
}

Employee::Employee(string n, int a, int b, int c, int d)
{
    name = n;
    earn = a;
    y = b;
    m = c;
    d = d;
}

void Employee::getInfo(int year2, int mon2)
{
    int yc = year2 - y;
    int ms = mon2 - m;
    cout << name << ' ' << (yc * 12 + ms) * earn << endl; //简单计算
    return;
}
