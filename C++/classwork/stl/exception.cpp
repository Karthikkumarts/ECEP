#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    float res;
    cout<<"n1 : ";
    cin>>n1;
    cout<<"n2 : ";
    cin>>n2;
    try
    {
	if(n2 == 0)
	{
	    throw "hey n2 is 0";
	   // throw 0;
	}
	else
	{
	    res = n1/n2;
	    cout<<"res : "<<res<<endl;
	}
    }
    catch(const char * err)
    {
	cout<<"error : "<<err<<endl;
    }
    catch(int error)
    {
	cout<<"error : "<<error<<endl;
    }
}
