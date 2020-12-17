#include <iostream>
using namespace std;

class Student{
private://私有对象
	string sch_n;
	string name;
	int old;
public://公开对象
	Student(string a,string b,int c);//构造函数
	void Print();
};
class G_Student :public Student{//继承Student
private:
	string dsname;
public:
	G_Student(string a, string b, int c, string d) :Student(a, b, c) {//在子类的构造函数后，加一个冒号（:），然后加上父类的带参数的构造函数完成父类与子类的构造
		dsname = d;
	};
	void Print();//子类的重载函数
};
int main()
{
	/*定义一个学生基类Student，包括私有数据成员：学校名、姓名、年龄，输出数据成员值的公有成员函数Print()。
	再定义一个研究生类G_Student，公有继承方式派生于学生类Student，
	其中新增私有数据成员：导师姓名，并定义输出研究生数据的公有成员函数Print()。
	实现学生信息的输出。 
	键盘输入：MIT Kate 20 Smith 
	输出：MIT大学的Kate年龄20导师是Smith*/
	string a, b, c;
	int d;
	cin >> a >> b >> d >> c;//输入
	G_Student yjs(a,b,d,c);//构造研究生
	yjs.Print();//输出
	return 0;
}

Student::Student(string a, string b, int c)
{
	name = b;
	sch_n = a;
	old = c;
}

void Student::Print()
{
	cout << sch_n << "大学的";
	cout << name << "";
	cout << "年龄" << old;
}

void G_Student::Print()
{
	Student::Print(); //子类重载函数调用父类的同名函数方式，使用父类类名+双冒号（::）+要调用的父类函数
	cout << "导师是" << dsname;
}
