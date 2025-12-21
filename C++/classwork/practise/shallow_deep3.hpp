#include<iostream>
using namespace std;
class shallow{
	int *data;
	public:
	shallow(int data);
	shallow(const shallow & data);
	shallow &operator=(const shallow & data);
	void display();
	void set_values(int val);
	~shallow();
};

shallow::shallow (int val)
{
	data = new int{val};
}

shallow::shallow(const shallow & sh) : shallow(*sh.data)
{
	cout<<"deep copy called" << endl;
}
shallow &shallow :: operator=(const shallow & val)
{
	cout<<"copy assignement operator"<<endl;
	if(this == &val)
		return *this;

	delete data; //assume class b =a  then we need to free the exiting data other wise b.data willl be lost and cant be freed further

	 data = new int(*val.data);
	 return *this;
}

void shallow::display()
{
	cout << "data : "<< *data << endl;
}

void shallow::set_values(int val)
{
	*data = val;
}
shallow::~shallow()
{
	delete data;
}
