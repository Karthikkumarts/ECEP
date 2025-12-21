#include<iostream>
using namespace std;
class stu
{
	int *id;
	protected:
	char *name;
	public:
	stu()
	{
		id = new int[1];
		name = new char[20];
	}
	~stu()
	{
		cout << "destructor is called\n";
		delete id;
		delete name;
	}
	void get();
	void display();
};

void stu::get()
{
	cin >> *id;
	cin >> name;
}
void stu::display()
{
	cout << *id << endl << name << endl;
}
int main()
{
	stu s;
	s.get();
	s.display();

}
