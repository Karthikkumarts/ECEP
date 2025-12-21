#include<iostream>
using namespace std;
class integer
{
	int data{0};
	public:
	integer() = default;
	/*integer()
	{
		data = 0;
	}*/
	integer(int val)
	{
		data = val;
	}
	void set_value(float val) = delete;
	void set_value(int val)
	{
		data = val;
	}

//	integer(const integer &) = delete;
	void display()
	{
		cout << "val : "<<data<<endl;
	}

};


int main()
{
	integer i;
	i.display();
	integer i2(i);
	i2.set_value(10.21f);
	i2.display();
}
