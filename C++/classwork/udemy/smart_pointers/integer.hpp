#include<iostream>
using namespace std;
class integer
{
    private:
	int * m_ptr;
    public:
	integer();
	integer(int value);
	integer(const integer &obj);
	integer(integer &&obj);
	int getvalue()const;
	void setvalue(int val);
	integer &operator=(const integer & obj);
//explicit	integer &operator=(integer && obj);
	integer &operator=(integer && obj);
	~integer();
	operator int();
};

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
integer::integer(const integer & obj)
{
    cout<<"integer(const integer & obj)"<<endl;
    m_ptr=new int{*obj.m_ptr};
}
integer::integer(integer && obj)
{
    cout<<"integer(integer && obj)"<<endl;
    m_ptr = obj.m_ptr;
    obj.m_ptr = nullptr;
}

int integer::getvalue() const
{
    return *m_ptr;
}
void integer::setvalue(int val)
{
    *m_ptr=val;
}
integer::~integer()
{
    cout<<"~(integer)"<<endl;
    delete m_ptr;
}
integer &integer :: operator=(integer && val)
{
	cout << "operator(const integer && val)"<<endl;
	//cout<<"move assignement operator"<<endl;
	if(this == &val)
		return *this;

	delete m_ptr; //assume class b =a  then we need to free the exiting data other wise b.data willl be lost and cant be freed further

	m_ptr = val.m_ptr;
	val.m_ptr = nullptr;
	return *this;
}
integer::operator int()
{
	return *m_ptr;
}
integer & integer::operator=(const integer &val)
{
	cout<<"operator=(const integer &val)"<<endl;
	if(this == &val)
		return *this;

	delete m_ptr;
	m_ptr = new int(*val.m_ptr);
	return *this;
}
