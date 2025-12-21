#include<stdio.h>
extern int max;
void foo()
{
    max=5000;
    printf("max = %d\n",max);

}
