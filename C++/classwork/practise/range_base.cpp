#include<iostream>
using namespace std;
int main()
{
	int arr[10] = {1,23,3,4,5,6,7,8,9,10};
	for(const auto i : arr)
	{
		cout << i<< ' ';
	}
	
	cout <<endl;
	cout << "using begin and end" << endl;
	for(auto i = begin(arr) ; i < end(arr) ; i++)
	{
		cout << *i << ' ';
	}
	cout <<endl;

	string s = "karthik";
	for(auto p = s.begin() ; p < s.end() ; p++)
	{
		cout << *p<< ' ';
	}
}
