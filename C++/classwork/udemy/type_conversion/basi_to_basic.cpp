#include<iostream>
#include"integer.hpp"
using namespace std;
int main()
{
	int a =5,b=2;
	float c = a/b;//int type return not float
	//char * p = &a; //error as converting int * to char *
	//char *p = (char *)&a; //works fine , but not remcommended in c++ casting between two different types
	//char * p = static_cast<char *>(&a); //pointers type are convertable
	char * p = reinterpret_cast<char *>(&a);
	const int x = 6;
	int * o = (int *)&x; // undefined behaviour and const is ignored 
	*o = 10;
	cout << &x<<" " <<o << endl;
	cout << x<<" " <<*o << endl;
	int *l = const_cast<int *>(&x);
	*l = 10;
	cout << &x<<" " <<l << endl;
	cout << x<<" " <<*l << endl;

}
