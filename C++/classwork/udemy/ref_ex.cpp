#include<iostream>
using namespace std;
void add(int a ,int b, int &ref);
void fact(int a,int &ref);

void fact(int a,int &ref)
{
    if(a < 0)
    {
	cout<<"error value is less than 0";
	return;
    }
    int i = 0;
    ref =1;
    for(i = 1 ; i <= a ; i++)
    {
	ref *= i;
    }
}

void add(int a ,int b, int &ref)
{
ref = a+b;
}

void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
int a=10,b=20;
int ref;
add(a,b,ref);
cout<<ref<<endl<<a<<endl;

int c= 5;
ref = c;
fact(c,ref);
cout<<c<<" : factorial is "<<ref<<endl;

cout<<"before" << a << " " << b<<endl;
swap(a,b);
cout << "after" << a << " " << b<<endl;
}
