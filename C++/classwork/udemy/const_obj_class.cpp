#include<iostream>
using namespace std;

class car
{
	int kms,mileage;
	public:
	car()
	{
		kms = 10;
		mileage = 7;
	}
	void display() const;
	void get_values();
};
void car::display() const
{
	cout << kms << ' ' <<mileage;
}
int main()
{
	const car c;
	c.display();
//      c.get_values();	

}
