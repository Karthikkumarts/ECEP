#include<iostream>
#include"integer.hpp"
using namespace std;
void display(const integer *p){
	cout << "the value : " << p->getvalue() << endl;
}
integer * getpointer(int val)
{
	integer * p = new integer{val};
	return p;
}
void operators(int val)
{
	integer *p = getpointer(val);
	if(p == nullptr)
	{
		fprintf(stderr, "memory for p is not created\n");
		p = new integer{val};
	}

	p->setvalue(200);
	display(p);
	delete(p);
	p=nullptr;
	p = new integer{};
	*p = __LINE__;
	display(p);
	delete(p);
	p=nullptr;
}
int main()
{
	operators(20);
}
