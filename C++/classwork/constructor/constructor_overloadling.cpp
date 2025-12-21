#include<iostream>
using namespace std;
class student
{
	int id;
    protected:
	string name;
    public:


/*	student(int id=0,string name="unkown") //parameterised constructor same as variable names use this-> 
	{
	   this->id=id;
	   this->name=name;
	}*/

	student(int id = 0 , string name ="unkonwn") : id(id),name(name)
	{
	}

	void display();
};



void student::display()
{
    cout << "id : "<< id<<endl;
    cout<< "name is : "<<name<<endl;
}

int main()
{
    student s1;
    s1.display();
    student s2(100,"srujan");
    s2.display();
}
