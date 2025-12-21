#include<iostream>
using namespace std;
int main()
{
    int a; //unintialized
    int a2=0; //copy 
    int a3(5); //direct 
    string s1; //defualt because string is a class wen obj s1 is created it calls default constructor
    string s2="karthi"; //copy
    char s3[8]; //uninitialized
    char s6[8] = {'\0'}; //copy
    char s4[8]={'a','b','c'}; //copy
    char s5[8]="abcd"; //copy


    //uniform

    int a4{};//value initialization //deafault value = 0
    int a5{5};
    char e{};
    char e2[8]{"hello"};

    int * a0 = new int{};
    char * a11 = new char[8]{};
    char *a21 = new char[8]{'a','b'};
}
