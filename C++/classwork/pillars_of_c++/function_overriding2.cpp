#include<iostream>
using namespace std;

class shape
{
    protected:
	double len,br;
    public:
	shape(double len = 1.0 , double br = 1.0) : len(len),br(br)
    {
    }
	virtual double area()
	{
	    cout<<"class shape "<<endl;
	    return 0;
	}
};

class rectangle : public shape
{
    public:
	rectangle(double len = 1.0,double br =1.0) : shape(len,br){}
	double area()
	{
	    cout<<"class rectangle "<<endl;
	    return len*br;
	}
};

int main()
{
    shape *s = new rectangle;
    s->area();
    //s->area(); //early binding //during compile time data gets bindings----check difference betweeen late and early binding
    delete s;
}
