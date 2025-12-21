#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["one"]=1;
    mp["tao"]=2;
    mp["three"]=3;
    map<string,int>:: iterator it = mp.begin();
    while(it != mp.end())
    {
	cout<<it->first<<endl;
	cout<<it->second<<endl;
	it++;
    }
}
