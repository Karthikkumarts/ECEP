#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    int arr[]={1,2,3,4};
    /* for(int i = 0 ; i < 4 ;i++) //normal index for loop
       {
       cout << arr[i] << " ";
       }*/



    //range based for loop

    /*for(const auto & x : arr)
    {
	//x = 4; //this will set all the ele of the array to 4 so use const
	    cout << sizeof(x)<< " " << x <<endl;
    }
    cout<<endl;
    for(const auto &x : {1,2,3,4})
    {
	    cout << x << " ";
    }*/




    //internally how range based loops works

   // int *beg=&arr[0];
   // int *end=&arr[4];


   /* auto range = arr;
    auto beg = begin(arr);
    auto end = std::end(arr);*/
    
    auto &&range = arr;
    auto beg = begin(range);
    auto end = std::end(range);
    
    for( ; beg != end ; ++beg)
    {
	cout << *beg << " ";
    }

    char name[]="karthik";
    for(const auto &x : name)
    {
	cout << x;
    }
    cout <<endl;

}
