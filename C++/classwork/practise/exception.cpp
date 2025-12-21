#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout << "n1 ";
	cin >> n1;
	cout << "n2 ";
	cin >> n2;

	try{
		if(n2 == 0)
		{
			throw "n2 is 0 hence we cant divide";
		}
		else
		{
			cout << n1/n2 <<endl;
		}
	}
	catch(const char *ptr)
	{
		cout << ptr << endl;
	}
	try
	{
		cout << "enter the n2 again ";
		cin >> n2;
		if(n2 == 0)
		{
			throw "n2 is 0 hence we cant divide";
		}
		else
		{
			cout << n1/n2 <<endl;
		}
	}
	catch(const char *ptr)
	{
		cout << ptr << endl;
	}



	
}
