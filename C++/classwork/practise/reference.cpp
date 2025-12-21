#include<iostream>
using namespace std;
void swap(int &a ,int &b)
{
	int temp =a;
	a = b ;
	b = temp; 
}
int main()
{
	int a = 10;
	//int &ref = 10;
	//const int & ref = 10;
	int & ref = a;
	cout << a <<endl << ref <<endl;

	ref = 20;
	cout << a <<endl << ref <<endl;

	int a1=10,b=20;
	cout << "a : " << a1 << "b : " << b <<endl;
	swap(a1,b);
	cout << "a : " << a1 << "b : " << b <<endl;

}
