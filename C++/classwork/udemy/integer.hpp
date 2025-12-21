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
	~integer();
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

