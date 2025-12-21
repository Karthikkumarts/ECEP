#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cout << "enter the string : " ;
	cin >> s;

	string s1(s);
	cout << "s1 : " <<s1<<endl;

	string s2(s.begin()+2 , s.end());
	cout << "s2 : " <<s2<<endl;

	string s3(s);
	if(s3.compare(s) == 0)
	{
		cout << "s3 and s strings are equal"<<endl;
	}
	else
	{
		cout << "strings are not equal"<<endl;
	}

	string s4(10 ,'a');
	 cout << "s4 : " <<s4<<endl;
	
	 cout << s.size()<<endl;
	 cout << s.empty()<<endl;

}
