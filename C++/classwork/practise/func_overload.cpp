#include<iostream>
using namespace std;
int add(int a, int b ,int c)
{
	return a+b+c;
}

int add(int a , int b)
{
	return a+b;
}

float add(int a ,float b)
{
	return a+b;
}

int main()
{
	cout << add(1,2) <<endl;
	cout << add(5,2,3) << endl;
	cout << add(1,9.5f) <<endl;
}
