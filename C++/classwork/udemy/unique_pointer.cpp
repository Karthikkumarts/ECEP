#include<iostream>
#include"integer.hpp"
#include<memory>
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
void process(unique_ptr<integer> ptr)
{
	cout<<"process "<<endl;
	cout << ptr->getvalue()<<endl;
}

void createInteger()
{
	unique_ptr<integer> p(new integer);
	p->setvalue(5);
	process(std::move(p));
	//process((p)); // copy is deleted
	//cout << p->getvalue() <<endl; //we cant use because we have moved the p i,e we have given ownership of p to ptr ,acceess means illegal
}
int main()
{
createInteger();	
}
