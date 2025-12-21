#include<iostream>
using namespace std;
class student
{
	int id;
    protected:
	string name;
    public:
	void get_values();
	void display();
};

void student::get_values()
{
    cout<< "enter the id : ";
    cin>>id;
    cout<<"enter the name : ";
    cin>>name;

}
void student::display()
{
    cout << "id : "<< id<<endl;
    cout<< "name is : "<<name<<endl;
}

int main()
{
    student s;
    s.get_values();
    s.display();
}
