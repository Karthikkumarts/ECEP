#include<iostream>
using namespace std;
void print(const char * name,int x,int y,int height,int width);

void print(const char * name,int x=-1,int y=-1,int height=-1,int width=-1)
{
    cout<<"name : "<<name<<endl;
    cout<<"x : "<<x<<endl;
    cout<<"y : "<<y<<endl;
    cout<<"width : "<<width<<endl;
    cout<<"height : "<<height<<endl;
}

int main()
{
    print("abc");
}
