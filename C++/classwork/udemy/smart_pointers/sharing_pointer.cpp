#include<iostream>
#include<string>
using namespace std;


class project
{
	string name;
	public:
	void setname(string m_name)
	{
		name = m_name;
	}
	void showprojectdetails()
	{
		cout << "project name  : " << name <<endl;
	}
	~project() {};
};

class employee
{
	project * m_project;
	public:
	void setproject(project * prj)
	{
		m_project =prj;
	}
	project * getproject()
	{
		return m_project;
	}
	~employee(){};
};

void showinfo(employee * emp)
{
	cout << "employee detailss : ";
	emp->getproject()->showprojectdetails();
}

int main()
{
	project *prj = new project{};
	prj->setname("video decoder ");
	employee *e1 = new employee{};
	e1->setproject(prj);
	employee *e2 = new employee{};
	e2->setproject(prj);
	employee *e3 = new employee{};
	e3->setproject(prj);
	
	prj->showprojectdetails();
	showinfo(e1);
	showinfo(e2);
	showinfo(e3);

	delete prj;
	delete e1;
	delete e2;
	delete e3;
}
