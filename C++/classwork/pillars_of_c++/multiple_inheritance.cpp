#include<iostream>
using namespace std;

class emertxemember
{
    public:
	int id;
	string name;
	emertxemember()
	{
	    cout<<"emertxe member : "<<endl;
	}
};

class manager
{

    public:
	int id;
	string name;
	manager()
	{
	    cout<<"manger : "<<endl;
	}
};

class admin : public emertxemember,public manager
{
    public:
	admin()
	{
	    cout<<"admin"<<endl;
	}
};


int main()
{
    admin a;
    //a.id =10; //because id is defined in both magnager and emertxe member the compiler will get confused
    a.emertxemember::id=10; //so we need to specify the class name with scope resolution
}
