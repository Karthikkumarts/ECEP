#include<iostream>
using namespace std;
class student
{
	int id;
    protected:
	string name;
    public:

	student() //default constructor
	{
	   id = 10;
	   name = "karthik";
	}

	/*student(int sid,string sname) //parameterised constructor
	{
	    id=sid;
	    name=sname;
	}*/


	student(int id,string name) //parameterised constructor same as variable names use this-> 
	{
	   this->id=id;
	   this->name=name;
	}


/*	student(student &st) //copy constructor no need of this
	{
           id = st.id;
	   name = st.name;
	}*/
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

    student s3 = s1;
    s3.display();
    student s4 = s1;
    s4.display();
}
