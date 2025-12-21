#include<iostream>
using namespace std;
class car
{
    private:
	int val{0};
    public:
	car() = default;
	//car(const car & ) = default;
	car(const car & ) = delete;
	void setvalue(int num){val = num;}
	void setvalue(float num) = delete;
};

int main()
{
    car c1;
   // car c2(c1);
    c1.setvalue(5);
  //  c1.setvalue(5.3f);
}
