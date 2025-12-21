#include<iostream>
using namespace std;
inline int square(int x)
{
    return x*x;
}
int main()
{
    int x =10;
    int res = square(x);
    cout << "square of "<< x <<" is : " <<res<<endl;
}
