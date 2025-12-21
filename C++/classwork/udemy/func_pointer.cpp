#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}
void print(void )
{
    cout<<"program terminated";
}
int main()
{
    atexit(print);

    int (*pfn)(int,int);

    pfn = add;
    cout<<pfn(5,2)<<endl;
}
