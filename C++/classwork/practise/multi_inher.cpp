#include<iostream>
using namespace std;
class emer
{
	public:
		int id;
		emer()
		{
			cout << "parent of parent"<<endl;
		}
};

class mentor
{
	public:
		int id;
		mentor()
		{
			cout << "parent "<<endl;
		}
		void display()
		{
			cout << id << endl;
		}
};

class student : public emer , public mentor
{
	public:
		student()
		{
			cout << "child "<<endl;
		}
};


int main()
{
	student s;
	s.mentor::id = 10;
	s.mentor::display();
}
