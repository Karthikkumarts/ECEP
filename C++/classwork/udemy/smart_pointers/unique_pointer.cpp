#include<iostream>
#include<memory>
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
//void store(unique_ptr<integer>p)
void store(unique_ptr<integer>&p)
{
	cout << "getting the value after to store"<<p->getvalue()<<endl;
}

void operators(int val)
{
	unique_ptr<integer> p{getpointer(val)};
	if(p == nullptr)
	{
		fprintf(stderr, "memory for p is not created\n");
		p.reset(new integer(val));
	}

	p->setvalue(200);
	display(p.get());
	p=nullptr;
	p.reset(new integer{});
	*p = __LINE__;
	display(p.get());

	store(p); // here we wont give ownership of p
	//store( move(p)); //giving away the ownership 
}
int main()
{
	operators(20);
}
