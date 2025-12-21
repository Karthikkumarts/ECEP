#include<iostream>
using namespace std;

class calsi
{
    int n1,n2;
    public:
	calsi(int n1 = 1,int n2 = 1) : n1(n1),n2(n2)
    {
    }
	void operator -()
	{
	    n1 = -n1;
	    n2 = -n2;
	}

	void operator ++()
	{
	    ++n1;
	    ++n2;
	}

	void operator ++ (int)
	{
	    n1++,n2++;
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
    -c1;
    c1.display();
    ++c1;
    c1.display();
    c1++;
    c1.display();
    
}
