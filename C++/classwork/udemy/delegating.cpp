#include<iostream>
using namespace std;
class car
{
    private:
	int amount;
	int speed;
	static int count;
    public:
	car();
	car(int amount);
	car(int amount,int speed);
	~car();
	    
};

car::car():car(0){
cout << "car()"<<endl;
}

car::car(int amount):car(amount,0){
cout << "car(amount)"<<endl;
}
car::car(int amount,int speed)
{
cout << "car(amount,speed)"<<endl;
}

car::~car()
{
    cout<<"~cout()"<<endl;
}

int main()
{
    car c1;
}

