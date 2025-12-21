#include<iostream>
using namespace std;
template<typename A ,typename B>
B Max(A n1 , B n2)
{
    return n1>n2?n1:n2;
}

int main()
{
    cout<<Max(10.25,2.20)<<endl;
    cout<<Max(10.25,2.20)<<endl;
    cout<<Max(10,2.20)<<endl;

}
