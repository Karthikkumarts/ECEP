#include<iostream>
#include<cstring>
using namespace std;
void New()
{
    int *p = new int;
    *p = 6;
    cout << *p <<endl;
    delete p;
    p = nullptr;
}
void New_arr()
{
    //int *ptr=new int[5];
    int *ptr=new int[5]{1,2,3,4,5};
    for(int i = 0 ; i < 5 ;i++)
    {
	ptr[i]=i;
	cout<<ptr[i]<<" ";
    }
    cout<<endl;

    delete[] ptr;
    ptr = nullptr;

}
void New_str()
{
    char *str=new char[7];
    strcpy(str,"karthi");
    cout<<str<<endl;
    delete[] str;
    str = nullptr;
}

void New_2d_arr()
{
    int *p1=new int[3];
    int *p2=new int[3];

    int **ptr=new int *[2];
    ptr[0]=p1;
    ptr[1]=p2;


    int i = 0 , j = 0;
    for( i = 0 ; i < 2 ;i++)
    {
	for(j = 0 ; j < 3 ; j++)
	{
	    cin >>ptr[i][j];
	}
    }
    for(int i = 0 ; i < 2 ;i++)
    {
	for(int j = 0 ; j < 3 ; j++)
	{
	    cout<<ptr[i][j]<<" ";
	}
	cout<<endl;
    }
    delete[] p1;
    delete[] p2;
    delete[] ptr;

}
int main()
{
    New();
    New_arr();
    New_str();
    New_2d_arr();
}
