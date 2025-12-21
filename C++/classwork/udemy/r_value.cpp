#include<iostream>
using namespace std;

int add(int x, int y)
{
    return x+y;
}


int &transform(int &x)
{
    x *= x;
    return x;
}


void print(int &x)
{
cout << "print(int & x)"<<endl;
}

/*void print(const int & x)
{
    cout <<"print(const int & x)"<<endl;
}*/

void print(int &&x)
{
    cout << "print(int && x)"<<endl;
}


int main()
{
    int &&r=10;
    int &&r2 = add(3,2);
    int x =10;

    // int &&ref =x; //r value reference always bind to temporaries

    int & ref = transform(x);
    print(x);
    print(10); //always binds to r value reference but it can also binds to const ..... in function overloading it will always bing to r value reference as it is temporary`

}
