#include<iostream>
using namespace std;
template<typename A ,typename B>
B Max(A n1 , B n2)
{
    return n1>n2?n1:n2;
}

template<typename F>
class calsi
{
    F n1,n2;
    public:
    calsi(F n1 = 0, F n2 = 0 ) : n1(n1),n2(n2){}
    void display();
    void get_values();
};

template<typename F>
void calsi<F>::display()
{
    cout<<n1<<endl;
    cout<<n2<<endl;
}

template<typename F>
void calsi<F>::get_values()
{
    cout <<"id : ";
    cin  >> n1;
    cout <<"roll : ";
    cin  >> n2;
}
int main()
{
    cout<<Max(10.25,2.20)<<endl;
    cout<<Max(10.25,2.20)<<endl;
    cout<<Max(10,2.20)<<endl;
    cout<<"----------------"<<endl;
    calsi <int>c;
    c.get_values();
    c.display();
    /*calsi <float>c2(10.30f,20.25f);
    c2.display();*/

}
