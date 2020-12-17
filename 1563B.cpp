#include <iostream>
using namespace std;

class Staff {
private:
	string level;
public:
	Staff(string l) {//简单的构造函数直接在类定义里面写就可以了
		level = l;
	};
	void print() { //这两种(1562A和1563B的两种函数处理方式，第一种是放在定义外面，在main函数下面写，第二种是直接在构造的时候写)都可以，取决于自己的代码写法
		cout << "级别是" << level << endl;
	};
};
class Teacher :public Staff {
private:
	string title;
	string name;
public:
	void print2() {
		cout << name << endl;
		print();//如果不像1562A那样重载的话,就可以这样写，因为函数名称不同（一个是print一个是print2，因此不会被覆盖掉）
		cout << "职称是" << title << endl;
	};
	Teacher(string l, string t, string n) :Staff(l) {//子类构造函数(说明详见1562A)
		title = t;
		name = n;
	}
};
int main()
{
	/*学校的所有工作人员，都有工作级别，比如，职员、副科、正科、正处等，
	定义一个职工类Staff，包含私有数据成员：级别level，及输出级别的成员函数。
	学校里的老师，都有职称，比如，讲师、副教授、教授等，定义一个教师类Teacher，包含私有数据成员：级别title，及输出职称的成员函数。
	创建一个教师员工Staffteacher类，采用多继承，继承Staff和Teacher类，包括私有数据成员：姓名name，及输出姓名的成员函数。
	编写程序，由键盘输入一名教师员工的级别、职称、姓名，将这些信息完整输出。
	输入：
	正科 讲师 李明
	输出：
	李明
	级别是正科
	职称是讲师h*/
  /***************第二种：在类构造同时进行函数构建******************/
	string a, b, c;
	cin >> a >> b >> c;//输入
	Teacher teacher(a, b, c);//创建
	teacher.print2();//输出
	return 0;
}
