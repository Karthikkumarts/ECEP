#include<iostream>
#include"class.h"
using namespace std;
int car::count = 0;
void car::show_count()
{
    cout<<"---------count : "<<count<<endl;
}
car::car(int speed,float fuel)
{
    ++count;
    this->speed=speed;
    this->fuel=fuel;
}
car::~car()
{
    --count;
    cout<<"~car called"<<endl;
}

void car::accelerate()
{
    this->speed++;
    this->fuel -= 0.5;
}

void car::dashboard() const
{
    cout<<"speed "<<speed<<endl;
    cout<<"fuel "<<fuel<<endl;
    cout<<"app "<<app<<endl;
}
