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
	double area()
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
    rectangle r(5,20.5);
    shape s;
   cout <<  r.area() << endl;
   cout <<  s.area() << endl;

}
