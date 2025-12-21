#include<iostream>
#include"fun_over.h"
using namespace std;

int add(int a,int b)
{
    return a+b;
}

float add(float a , float b)
{
    return a+b;
}

extern "C" void print(int *x)
{
    cout<<"x is : "<<*x<<endl;
}

void print(const int * x)
{
    cout << "const x : "<< *x<< endl;
}
