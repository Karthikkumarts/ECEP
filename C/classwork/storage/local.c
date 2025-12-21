#include<stdio.h>
int foo()
{
    int i=10; //local variables
    printf("%d\n",i);
    return i;
}
int main()
{
    int i=0; 
    //foo();
    printf("%d\n",foo());
    printf("%d\n",i);
    return 0;
}
