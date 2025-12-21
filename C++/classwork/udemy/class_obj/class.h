#include<iostream>
using namespace std;
class car
{
    private:
	int speed;
	float fuel;
	int app{0};
	static int count;
    public:
	car(int speed,float fuel);
	~car();
	void accelerate();
	void dashboard() const;
	static void show_count();
};
