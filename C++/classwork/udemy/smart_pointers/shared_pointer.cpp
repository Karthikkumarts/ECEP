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
	shared_ptr<project>  m_project;
	public:
	void setproject(shared_ptr<project> &prj)
	{
		m_project = prj;
	}
       const shared_ptr<project> & getproject()
	{
		return m_project;
	}
	~employee(){};
};

void showinfo(shared_ptr<employee> &emp)
{
	cout << "employee detailss : ";
	emp->getproject()->showprojectdetails();
}

int main()
{
	shared_ptr<project>prj{ new project{}};
	prj->setname("video decoder ");
	cout << "ref count : " << prj.use_count()<<endl;
	shared_ptr<employee> e1{new employee{}};
	e1->setproject(prj);
	cout << "ref count : " << prj.use_count()<<endl;
	shared_ptr<employee> e2{new employee{}};
	e2->setproject(prj);
	cout << "ref count : " << prj.use_count()<<endl;
	shared_ptr<employee> e3{new employee{}};
	e3->setproject(prj);
	cout << "ref count : " << prj.use_count()<<endl;
	
	prj->showprojectdetails();
	showinfo(e1);
	showinfo(e2);
	showinfo(e3);
	e3.reset();
	cout << "ref count : " << prj.use_count()<<endl;
}
