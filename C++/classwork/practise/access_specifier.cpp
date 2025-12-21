#include<iostream>
using namespace std;
class student
{
	int id;
	protected:
	string name;
	public:
	void get();
	void display();
};

void student::get()
{
	cout << "enter the name and id "<<endl;
	cin >> id;
	cin >> name;
}

void student::display()
{
	cout << "id : "<< id<<endl;
	cout << "name : "<< name<<endl;
}

int main()
{
	student s;
	s.get();
	s.display();
}
