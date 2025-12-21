#include<iostream>
#include<stdlib.h>
using namespace std;
class car
{
    private:
	int *ptr;
    public:
	car(int d);
	~car();
	car(const car & value);
	int get_value(){return *ptr;}
	void set_value(int data){*ptr = data;}
};

car::car(int d)
{
    ptr=new int;
    *ptr=d;
}
car::~car()
{
    delete ptr;
}

/*car::car(const car &source):car(*(source.ptr)) //DEEP COPY
{
}*/
car::car(const car &source):ptr((source.ptr))  //SHALLOW COPY
{
}
void display(car s)
{
    cout<<s.get_value()<<endl;
}
int main()
{
car obj1{100};
display(obj1);
car obj2{obj1};
obj1.set_value(1000);
display(obj2);
display(obj1);
}
