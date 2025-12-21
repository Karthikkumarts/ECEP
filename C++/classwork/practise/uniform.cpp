#include<iostream>
using namespace std;
class sty
{
	int id ,age;
	public:
		sty(int age =0 , int id = 0) : age(age) , id(id) {}

		void display()
		{
		cout << id <<endl << age<<endl;
		}
};

int main()
{
	int a ;
	int a2 = 4;
	int a3(5);

	int a4 {};
	cout << a4 << endl;
	int a5 {5};
	cout << a5 << endl;

	string q {};
	cout << "q : " <<q<<endl;
	string s {"karthik"};
	cout << s << endl;

	int arr[10] {} ;
	for(auto i : arr){ cout << *arr;}
	
	sty sp{10,24};
	cout << endl;
	sp.display();
	
	sty sp1 = sp;
	cout << endl;
	sp1.display();



}
