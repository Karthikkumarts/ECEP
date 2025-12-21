#include<iostream>
using namespace std;
void print(const int &ref)
{
    cout<<ref<<endl;
  //  ref = 200; //cant modify as const is used

}
int main()
{
    const int PI = 3.142f;
    int r = 10;
    int area = PI * (r * r);
    cout << area<<endl;


    /*const int i = 10;
    int x=20;
    
    const int *ptr = &i; only *ptr is constant
    
    const int * const ptr = &i; //*ptr and ptr both are constant

    *ptr = 20; // read only location , cannot modilfy *ptr
    
    ptr = &x;
	
    cout<<*ptr<<endl;*/



    int c = 20;
    print(c);
    cout<<"main C : "<<c<<endl;
}
