#include<iostream>
#include"fun.h"
using namespace std;

extern "C" 
{
	void print(int *x)
	{
		cout << "x : " << *x << endl;
	}
	int add (int a , int b)
	{
		return a+b;
	}
}
