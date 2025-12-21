#include<iostream>
#include"integer.hpp"

class intptr
{
	integer *m_ptr;
	public:
	intptr(integer* p): m_ptr(p) {}
	~intptr(){
		delete m_ptr;
	}
	integer * operator ->()
	{
		return m_ptr;
	}
	integer &operator *()
	{
		return *m_ptr;
	}
};
void createInteger()
{
	intptr p = new integer;
	p->setvalue(5);
	cout << p->getvalue() <<endl;
	//cout << p->getvalue()<<endl;
}
/*void createInteger()
{
	integer *p = new integer;
	p->setvalue(3);
	cout << p->getvalue()<<endl;
	//delete p; //memory leak if we haven't delete
}*/
int main()
{
createInteger();	
}
