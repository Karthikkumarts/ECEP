#include<iostream>
using namespace std;

class emertxemember
{
   int id;
   string name;
    public:
   emertxemember(int id = 0 ,string name = "unkown") : id(id),name(name)
   {
       cout<<"parent"<<endl;
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
    student(int i = 0 ,string n = "student") : emertxemember(i,n)
    {
       cout<<"child"<<endl;
    }
};


int main()
{
   emertxemember e(100,"emertxe");
   student s;//(200,"karthik");
   cout<<"sizeof of emertxe : "<<sizeof(e)<<endl;
   cout<<"sizeof of student : "<<sizeof(s)<<endl;
   cout<<"parent class has :"<<endl;
   e.display();
   cout<<"child class has :"<<endl;
   s.display();

}
