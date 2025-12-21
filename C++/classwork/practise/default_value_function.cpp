#include<iostream>
using namespace std;
void print( const char *   name = "abc" , int height = -1 , int width = -1 , float area = 1.2)
{
	cout << name <<endl;
	cout << height <<endl;
	cout << width <<endl;
	cout << area <<endl;
}
int main()
{
	print();
}
