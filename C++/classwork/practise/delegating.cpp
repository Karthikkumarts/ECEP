#include<iostream>
using namespace std;

class car
{
	int speed,pass,amount;
	float fuel;
	public:
	car();
	car(int amount);
	car(int amount , int pass);
};

car::car():car(0)
{
	cout<<"takes no argument"<<endl;
}

car::car(int amount) : car(amount,0)
{
	cout<<"takes only arument argument"<<endl;
}

car::car(int amount,int pass)
{
	cout<<"common initializer"<<endl;
	this->amount = amount;
	this->pass = pass;
	fuel = 10.23;
	speed = 200;
}
int main()
{
car c;
car c1(10);

}
