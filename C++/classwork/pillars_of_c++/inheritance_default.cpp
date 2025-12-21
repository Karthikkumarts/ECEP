#include<iostream>
using namespace std;

class emertxemember
{
   int id;
   string name;
    public:
   emertxemember()
   {
       cout<<"parent constructor"<<endl;
       id = 100;
       name = "karthik";
   }
   void display()
   {
       cout<<"id is : "<<id<<endl;
       cout<<"name is : "<<name<<endl;
   }
};

class student : public emertxemember
{
    float attandance;
    public:
    student()
    {
      cout<<"child constructor "<<endl;
    }
};


int main()
{
   emertxemember e;
   student s;
   cout<<"sizeof of emertxe : "<<sizeof(e)<<endl;
   cout<<"sizeof of student : "<<sizeof(s)<<endl;
   cout<<"parent class has :"<<endl;
   e.display();
   cout<<"child class has :"<<endl;
   s.display();

}
