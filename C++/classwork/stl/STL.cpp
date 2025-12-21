#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    string s1="hello";
    string s2 = "world";

    if(s1.compare(s2) == 0)
    {
	cout<<"strings are samee"<<endl;
    }
    else
	cout<<"strings are not same"<<endl;

    cout<<"length of s1 : "<<s1.length()<<endl;
    cout<<"length of s2 : "<<s2.length()<<endl;

    s1.assign(s2); 
    if(s1.compare(s2) == 0)
    {
	cout<<"strings are samee"<<endl;
    }
    cout<<"s1 : "<<s1<<endl;
    cout<<"empty or not : "<<s1.empty()<<endl;

   const char * s;
    s = s1.c_str();
    printf("%s",s);
  /*  int i = 0;
    for(i = s1.begin() ; i < s1.end() ; i++)
    {
	cout<<s[i]<<end
    }*/

}
