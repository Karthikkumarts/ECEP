#include<iostream>
using namespace std;
int x = 10;
namespace first
{
	int x =10;
}

namespace second
{
	double x = 10.234;
}


namespace myspace
{
	class employee
	{
		int id;
		string name;
		public:
		employee(int id = 0 , string name = "unkown") : id(id) , name(name) {}

		void display()
		{
			cout << id << endl << name << endl;
		}
	};
}


class employee
{
	int id;
	string name;
	public:
	employee(int id = 0 , string name = "unkown") : id(id) , name(name) {}

	void display()
	{
		cout << id << endl << name << endl;
	}
};

int main()
{
int x = 20;
cout << x << endl;
{
extern int x;
cout << x << endl;
}
cout << first::x << endl;
cout << second::x << endl;

employee y(10,"karthi");
y.display();

myspace::employee c(20,"peak");
c.display();

}
