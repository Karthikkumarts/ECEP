#include<iostream>
using namespace std;
class shallow{
	int *data;
	public:
	shallow();
	shallow(int data);
	shallow(const shallow & data);
	shallow(shallow && data);
	shallow &operator=(const shallow & data);
	shallow &operator=( shallow && data);
	void display();
	void set_values(int val);
	~shallow();
};
shallow::shallow()
{
	cout<<"default constructor"<<endl;
	data = new int;
}
shallow::shallow(shallow && obj)
{
	cout<< "shallow(shallow &&)"<<endl;
	data = obj.data;
	obj.data = nullptr;
}
shallow &shallow :: operator=( shallow && val)
{

	cout << "operator(const shallow && val)"<<endl;
	//cout<<"move assignement operator"<<endl;
	if(this == &val)
		return *this;

	delete data; //assume class b =a  then we need to free the exiting data other wise b.data willl be lost and cant be freed further
	cout<<"deleted data"<<endl;
	data = (val.data);
	val.data = nullptr;
	cout<<"assigned val.data to data"<<endl;
	return *this;
}
shallow::shallow (int val)
{
	cout << "shallow(int val)"<<endl;
	data = new int{val};
}

shallow::shallow(const shallow & sh) : shallow(*sh.data)
{
	cout << "shallow(const shallow &val)"<<endl;
	//cout<<"deep copy called" << endl;
}
shallow &shallow :: operator=(const shallow & val)
{
	cout << "operator(const shallow &val)"<<endl;
	//cout<<"copy assignement operator"<<endl;
	if(this == &val)
		return *this;

	delete data; //assume class b =a  then we need to free the exiting data other wise b.data willl be lost and cant be freed further

	data = new int(*val.data);
	return *this;
}

void shallow::display()
{
	if(*data)
		cout << "data : "<< *data << endl;
	else
		cout << "data : Nullptr" << endl;
}

void shallow::set_values(int val)
{
	*data = val;
}
shallow::~shallow()
{
	cout << "destructor"<<endl;
	delete data;
}
