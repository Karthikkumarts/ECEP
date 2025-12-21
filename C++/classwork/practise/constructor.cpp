#include<iostream>
using namespace std;
class student
{
	int id;
	protected:
	string name;
	public:
	/*student()
	{
		id = 10;
		name = "karthik";
	}
	student(int id , string name)
	{
		this->id = id;
		this->name = name;
	}*/
	student(student &s)
	{
		id = s.id;
		name = s.name;
	}
	/*student(int id =0 , string name = "unknown")
	{
		this->id = id;
		this->name = name;
	}*/
	student(int id=0 , string name="unkown") : id(id) , name(name) {} 
	void display();
};

void student::display()
{
	cout << "id :" << id << " name : " << name << endl;
}
int main()
{
	student s;
	s.display();
	student s1(120 , "karp");
	s1.display();
	student s2(s);
	s2.display();
	
}
