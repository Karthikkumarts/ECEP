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
	friend double area();
	friend class recatngle;
};

double area()
{
    shape s(10,20);
    s.len = 20;
    s.br=20;
    cout<<s.len * s.br<<endl;
    return 0;
}

class rectangle
{
};

int main()
{
    area();
}
