#include<iostream>
using namespace std;

int main()
{
	//cannot access like read and defrence a nullptr
	int *ptr = NULL;
	cout << "*ptr : " << *ptr;

	int *ptr2 =nullptr;
	*ptr2 =100;
	cout << "*ptr2 : " << *ptr2;

}
