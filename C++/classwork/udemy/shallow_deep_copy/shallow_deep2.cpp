#include<iostream>
using namespace std;

class integer
{
	int *ptr;
	public:
	integer(int data)
	{
		cout << "constructor called"<<endl;
		ptr = new int;
		*ptr = data;
	}
/*	integer(const integer &sh)
	{
		ptr = sh.ptr;
		cout << "shallow copy" << endl;
	}*/ //shallow copy


	//TYpe 1 of deep copy
	//integer(const integer & sh) : integer(*(sh.ptr)) {} //Deep copy
	//Type 2 of Deep copy
	integer(const integer &sh)
	{
		ptr =new int{*(sh.ptr)};
	}
	void display()
	{
		cout << *ptr<<endl;
	}
	void set_value()
	{
		*ptr = 25;
	}

	~integer()
	{
		delete ptr;
	}
};

int main()
{
	integer r(5);
	r.display();
	integer r1(r);
	r1.display();
	r.set_value();
	r.display();
	r1.display();

}
