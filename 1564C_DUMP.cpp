#include <iostream>
#include <cstring>
using namespace std;
class student//声明类
{
private:
	char m_name[20];
	int m_math;
	int m_physics;
public:
	void setStudent()
	{
		cin >> m_name;
		cin >> m_math;//输入数学成绩
		cin >> m_physics;//输入物理成绩
	}
	void copyStudent(student stu)
	{
		strcpy(m_name, stu.getName());
		m_math = stu.getMath();
		m_physics = stu.getPhysics();
	}
	char* getName()
	{
		return m_name;
	}
	int getMath()
	{
		return m_math;//返回数学成绩
	}
	int getPhysics()
	{
		return m_physics;
	}
	void SortMath(student* students, int n)
	{
		student stemp;
		for (int i = 1; i < n; i++)
		{
			for (int j = n - 1; j >= i; j--)
			{
				if ((students + j)->getMath() > (students + j - 1)->getMath())
				{
					stemp.copyStudent(*(students + j - 1));
					(students + j - 1)->copyStudent(*(students + j));
					(students + j)->copyStudent(stemp);
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << (students + i)->getName() << " " << (students + i)->getMath()
				<< " " << (students + i)->getPhysics() << endl;
		}
	}
};
int main()
{
	student students[4];
	for (int i = 0; i < 4; i++)
	{
		students[i].setStudent();//调用设置函数
	}
	students[0].SortMath(students, 4);
	return 0;
}
