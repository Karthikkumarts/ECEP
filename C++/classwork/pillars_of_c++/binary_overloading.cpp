#include<iostream>
using namespace std;

class calsi
{
    int n1,n2;
    public:
	calsi(int n1 = 1,int n2 = 1) : n1(n1),n2(n2)
    {
    }
	void operator +(int num)
	{
	    n1 += 10 ;
	    n2 += 10;
	}

	void operator +(calsi c)
	{
	    n1 += c.n1;
	    n2 += c.n2;
	}
	void display()
	{
	    cout<<n1<<endl<<n2<<endl;
	}
};


int main()
{
    calsi c1(10,20);
    c1.display();
    c1+10;
    calsi c2(30,40);
    c1+c2;
    c1.display();
    
}
