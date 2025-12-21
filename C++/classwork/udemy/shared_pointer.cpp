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
void process(shared_ptr<integer> ptr) //ref count = 2
{
	cout<<"process "<<endl;
	cout << ptr->getvalue()<<endl;
} //ref count = 1 because ptr goes out of scope hence it will be destroyed and menory will be deleted

void createInteger()
{
	shared_ptr<integer> p(new integer); //ref count = 1
	p->setvalue(5);
	process((p));
	cout << p->getvalue() <<endl; //we can access because we are sharing the underlying resource with the part of the code
} //ref =0 hence the memory will be deleted
int main()
{
createInteger();	
}
