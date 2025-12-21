#include<iostream>
using namespace std;

namespace avg
{
    int cal(int a, int b)
    {
	return (a+b)/2;
    }
}

namespace add
{
    int cal(int a,int b)
    {
	return a+b;
    }
}


int main()
{
int a=9,b=2;
cout<<avg::cal(a,b)<<endl;
cout<<add::cal(a,b)<<endl;
}
