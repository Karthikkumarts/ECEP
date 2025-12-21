#include<iostream>
using namespace std;
int & add(int &x ,int &y)
{
	x+=y;
	return x;
}

void print(int &x)
{
	cout <<"print(int &x)"<< x << endl;
}
void print(const int & x)
{
	cout <<"print(const int &x)"<< x << endl;
}

/*void print(int &&x)
{
	cout <<"print(int &&x)"<< x << endl;
}*/
int main()
{
	int &&x = 2;
	int x1= 5 , y=10;
	//int &&x2 = x1;
	int &ref = add(x1,y);
	print(x);
	print(25);
}
