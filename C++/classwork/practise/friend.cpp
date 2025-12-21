#include<iostream>
using namespace std;
class stu
{
	int len ,bed;
	public:
	stu(int len = 0 , int bed = 0 ) : len(len) , bed(bed) {}

	friend void area(stu &);
};

void area(stu &s)
{
	cout << s.len*s.bed << endl;
}

int main()
{
	stu s(10,20);
	area(s);
}
