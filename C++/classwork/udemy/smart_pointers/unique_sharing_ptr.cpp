#include<iostream>
#include<string>
#include<memory>
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
	unique_ptr<project>  m_project;
	public:
	void setproject(unique_ptr<project> &prj)
	{
		m_project = move(prj);
	}
       const unique_ptr<project> & getproject()
	{
		return m_project;
	}
	~employee(){};
};

void showinfo(unique_ptr<employee> &emp)
{
	cout << "employee detailss : ";
	emp->getproject()->showprojectdetails();
}

int main()
{
	unique_ptr<project>prj{ new project{}};
	prj->setname("video decoder ");
	unique_ptr<employee> e1{new employee{}};
	e1->setproject(prj);
	unique_ptr<employee> e2{new employee{}};
	e2->setproject(prj);
	unique_ptr<employee> e3{new employee{}};
	e3->setproject(prj);
	
	prj->showprojectdetails();
	showinfo(e1);
	showinfo(e2);
	showinfo(e3);
}
