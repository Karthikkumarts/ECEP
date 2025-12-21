#include<iostream>
using namespace std;
int main()
{
    //std::cout<<"hi hello \n"; //instead of using std : every time we can use namespace std
    //std::cout<<"welcome to c++"<<std::endl;



    int num1,num2;
    cout << "hi hello"<<endl;
    cout << "enter two number :";
    cin >> num1;
   cin  >> num2;
    cout << "NUM1 is :"<< num1 << endl << "NUM2 :"<<num2 << endl;

    string name;
    cout<<"enter the name :";
    getline(cin,name);
    cin>>name;//this will not take any character after space so use above function
    cout << "name is "<< name << endl;


    return 0;
}
