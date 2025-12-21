#include<stdio.h>
#define print(x) #x
//#define print "hello"
int main()
{
    printf("%s",print(1234));
  //  printf("%s",print);
    return 0;
}
