#include<iostream>
using namespace std;

class stu
{
	int a;
	int b;
	public:
	stu(int a=0 , int b =0) : a(a),b(b) {}

	void operator -()
	{
		a = -a;
		b = -b;
	}
	void operator +()
	{
		a = a*-1;
		b = b*-1;
	}
	void operator ++()
	{
		 ++a;
		 ++b;
	}
	void operator ++(int)
	{
		a++;
		b++;
	}
	void operator + (int num)
	{
		a += num;
		b+= num;
	}
	void operator + (stu c)
	{
		a+=c.a;
		b+=c.b;
	}
	void display()
	{
		cout << a << endl << b <<endl;
	}
	
};

int main()
{
	stu s(10,20);
	s.display();
	printf("\n");
	-s;
	s.display();
	printf("\n");
	+s;
	s.display();
	printf("\n");
	++s;
	s.display();
	printf("\n");
	s++;
	s.display();
	printf("\n");
	s+25;
	s.display();
	printf("\n");
	stu s1(20,25);
	s + s1;
	s.display();
	printf("\n");


}
