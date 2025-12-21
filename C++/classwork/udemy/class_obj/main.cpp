#include<iostream>
#include"class.h"
using namespace std;
int main()
{
    car::show_count();//--->static function (during declaration static needs to be given)
    car c1(10,20.5f);
    c1.accelerate();
    c1.accelerate();
    c1.accelerate();
    c1.dashboard();
    car c2(15,2.5f);
    c2.dashboard();
    car::show_count();

     car c4(0,0); //---->const qualifier have to be there during declaration and definition
    //c4.accelerate(); //--->cant modilfy as obj is constant
    c4.dashboard();
    car::show_count();


}

