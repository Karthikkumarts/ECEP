/* decription program to show usage of extern
   *thid file uses global variable from another file1.c
   */
extern int max;
#include<stdio.h>
int main()
{

    printf("max = %d\n",max);
}
