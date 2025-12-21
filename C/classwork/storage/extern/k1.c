#include<stdio.h>
int max=250;
extern void foo(); //foo() is in fun
extern int average(int num1, int num2);

int  main()
{
    int num1=10,num2=20;
    foo();
    printf(" max %d\n",max);
    int  avg = average(num1,num2);
    printf("average %d\n",avg);
    return 0;
}
