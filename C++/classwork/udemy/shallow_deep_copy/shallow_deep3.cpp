#include<iostream>
#include"shallow_deep3.hpp"

using namespace std;
void display_shallow(shallow c) //pass by value hence shallow copy is doen if user deined constructor not written , now it will call the deep copy
{
	 c.display();
}
shallow create_obj()
{
	cout<<"deep copy while returning"<<endl;
	shallow a{25};
	return a;
}
int main()
{
	shallow c{12};
	cout<<"sending the obj as pass by value or refernce"<<endl;
	display_shallow(c);
	cout<<"before creating a new onj"<<endl;
	shallow c1 = create_obj();
	c1.display();
	shallow c2 = c1;
	c2.display();
	c2 = c;

}
