#include<iostream>
using namespace std;

template<typename A , typename B>
A add(A n1 , B n2)
{
	return n1+n2;
}
template<typename F>
class stu{
	F id,age;
	public:
	stu(int id = 0 , int age = 0 ) : id(id) , age(age) {}
	void get_values();
	void display();
};
template<typename F>
void stu<F>::display()
{
	cout << "id "<<id<<endl;
	cout << "age " << age << endl;
}

template<typename F>
void stu<F>::get_values()
{
	cout << "id ";
	cin >> id ;
	cout << "age ";
	cin >>age;
}

int main()
{
	cout << add(10,25) << endl;
	cout << add(10.250,25) << endl;

	stu <int>a;
	a.get_values();
	a.display();
	stu <float>b;
	b.get_values();
	b.display();
}
