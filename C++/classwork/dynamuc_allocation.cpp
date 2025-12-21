#include<iostream>
using namespace std;
class student
{
	int id;
	char *name;
    public:


	student() //parameterised constructor same as variable names use this-> 
	{
	    name = (char*)new int[10];
	}

	~student()
	{
	    cout << "destructor called \n";
	    delete name;
	}
	void get_values();
	void display();
};

void student::get_values()
{
    cout << "enter the number : ";
    cin>>id;
    cout << "enter the name : ";
    cin>>name;

}

void student::display()
{
    cout << "id : "<< id<<endl;
    cout<< "name is : "<<name<<endl;
}

int main()
{
    student s1;
    s1.get_values();
    s1.display();
}
