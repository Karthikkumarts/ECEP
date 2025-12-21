#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int &ref=x;
    int y =100;
    //ref =6;
    ref = y;
    const int && s = 10;
    cout << s <<endl;
    cout << x << endl;
    cout << ref << endl;
}
