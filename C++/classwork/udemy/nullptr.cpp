#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr=&a;
    cout << "address of a : "<<&a<<endl;
    cout << "ptr store : "<<ptr<<endl;
    cout << "value of a : "<<a<< " "<<"value of ptr : "<<*ptr<<endl;
    int *ptr2=nullptr;
    *ptr2 = a; // throes error
    //ptr2=&a; //correct mwthod
    cout << "ptr2 store : "<<*ptr2<<endl;
}
