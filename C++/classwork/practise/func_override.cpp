#include<iostream>
using namespace std;

class shape
{
	int len,bred;
	public:
	shape(int len =0 , int bred =0 ) : len(len) , bred(bred) {}
virtual	void area()
	{
		cout << "shape class" << endl;
	}
};

class rectangle : public shape
{
	public:
		rectangle(int len = 0 , int bred = 0) : shape(len,bred) {}
		void area()
		{
			cout << " rectangle class " << endl;
		}
};
class circle : public rectangle
{
	public:
		circle(int len = 0 , int bred = 0) : rectangle(len,bred) {}
		void area()
		{
			cout << " circle class " << endl;
		}

};

int main()
{
	shape *s = new rectangle();
	s->area();
	s = new circle;
	s->area();

}
