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
	if(m_ptr == nullptr)
		m_ptr = new int;
    *m_ptr=val;
}
integer::~integer()
{
    cout<<"~(integer)"<<endl;
    delete m_ptr;
}
void print(integer a)
{
}
int main()
{
    integer a(1);
    //auto b(a); //what if i dont need a after moving to b
    //print(static_cast<integer &&>(a)); //this is not readble and get to know the intent that it will move
    print(std::move(a)); //after this a is unspecified object.
    //cout << a.getvalue()<<endl; // if you get the values it will crash because in move cunstructor we will assign nullptr to a; so re-initialize and then use
    a.setvalue(5); //need to check whether the variable is null ornot if null the allocate memory and then initialize
    cout<<a.getvalue()<<endl;
}
