#include<iostream>
using namespace std;
class integer
{
	private:
		int * m_ptr;
	public:
		integer();
		integer(int value);
		int getvalue()const;
		void setvalue(int val);
		integer operator+(const integer &x);
		~integer();
};
integer::~integer()
{
	delete m_ptr;
}
int integer::getvalue() const
{
	return *m_ptr;
}

void integer::setvalue(int x)
{
	*m_ptr = x;
}
integer::integer()
{
	cout<<"integer()"<<endl;
	m_ptr = new int{0};
}
integer::integer(int value)
{
	cout << "intger(int val)"<<endl;
	m_ptr=new int;
	*m_ptr=value;
}

integer add(const integer &a , const integer &b)
{
	integer temp;
	temp.setvalue(a.getvalue() + b.getvalue());
	return temp;
}

integer operator +( int y , const integer &x)
{
	integer temp;
	temp.setvalue(x.getvalue() + y);
	return temp;
}

int main()
{
	integer a(6);
	integer sum = (5+a);
	cout << sum.getvalue()<<endl;
}
