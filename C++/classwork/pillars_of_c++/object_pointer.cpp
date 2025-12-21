#include<iostream>
using namespace std;
class polygon
{
    protected:
	int width,height;
    public:
	polygon(int a,int b)
	{
	    cout<<"polygon "<<endl;
	    width = a;
            height = b;
	    cout << "width : " <<width<<endl<<"height : "<<height<<endl; 
	}
};

int main()
{
    polygon *p1 = new polygon(10,20);
    delete p1;
    return 0;
}
