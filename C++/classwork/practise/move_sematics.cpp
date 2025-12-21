#include<iostream>
using namespace std;

class integer
{
	int* m_ptr;
	public:
	integer()
	{
		cout<<"integer()"<<endl;
		m_ptr=new int{0};
	}
	integer(int val)
	{
		cout<<"integer(int val)"<<endl;
		m_ptr=new int;
		*m_ptr = val;
	}
	integer(const integer & obj)
	{
		cout<<"integer(const integer & obj)"<<endl;
		m_ptr = new int;
		*m_ptr = *obj.m_ptr;
	}
	integer(integer && obj)
	{
		cout<<"integer(integer && obj)"<<endl;
		m_ptr = obj.m_ptr;
		obj.m_ptr = nullptr;

	}

	int get_values() const
	{
		return *m_ptr;
	}
	void set_values(int val)
	{
		*m_ptr = val;
	}
	~integer()
	{
		cout<<"~integer"<<endl;
		delete m_ptr;
	}

};

integer add(const integer &a , const integer & b)
{
	integer temp;
	temp.set_values(a.get_values() + b.get_values());
	return temp;
}

int main()
{
	integer a(1) , b(2);
	a.set_values(add(a,b).get_values());
	cout<<a.get_values()<<endl;
	return 0 ;
}
