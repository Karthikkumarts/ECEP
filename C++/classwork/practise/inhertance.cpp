#include<iostream>
using namespace std;

class mentor
{
	int id;
	protected:
	string name;
	public:
	mentor(int id = 0 , string name = "unkown") : id(id) , name(name)
	{
		cout << "parent class " << endl;
	}

	void display();
};
class student : public mentor
{

	float attendance;
	public:
	student(int id = 10 , string name = "unkkkownn", float attendance = 4.3) : mentor(id,name) , attendance(attendance)
	{
		cout << "child class "<<endl;
	}
	void display();
};

void mentor::display()
{
	cout << id << endl << name << endl;
}

void student::display()
{
	cout << attendance<<endl;
}
int main()
{
	mentor m;
	student s;
	m.display();
	s.display();
}
