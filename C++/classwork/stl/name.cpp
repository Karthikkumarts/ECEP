#include<iostream>
using namespace std;

int display();

int display()
{

	cout << "-----------------hi---------------"<<endl;
	return 0;
}
namespace foo
{
    int x;
    int display()
    {
	cout << "-----------------hello---------------"<<endl;
	return 0;
    }
}
int main()
{
    int x=10;
    cout<<x<<endl;
    foo::x=20;
    cout<<foo::x<<endl;
    display();
    foo::display();
}
