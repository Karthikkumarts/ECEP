#include<iostream>
using namespace std;
class car{
	static int total_count; //will be part of class not to a object , will be shared by all the object
	int id;
	public:
	car()
	{
		++total_count;
	}
	static void display();

};
int car::total_count = 0; //has to be initialized outside class
void car::display()
{
	//cout << this->id << endl; //static member functions cant access other variables except static variables
	cout << total_count << endl;
}
int main()
{
	car::display();
	car c;
	car::display();
	car c1,c2;
	car::display();
}
