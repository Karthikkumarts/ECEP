#include<stdio.h>
#define print(x) #x //this # will convert literal to strings
//#define print "hello"
int main()
{
    printf("%s",print(1234));
  //  printf("%s",print);
    return 0;
}
