#include<stdio.h>
int main()
{
    int a[5]={1,2,3,56,5};
    void *vptr;
    vptr=a;
    printf("%d\n",*((int *)vptr));
    printf("%d\n",((int *)vptr)[2]);
  //  printf("%d\n",2[(int*)vptr]); //can be used
    printf("%p\n",vptr);
    printf("%d\n",*(int *)vptr + 3);
    printf("%d\n",((int *)vptr)[3]);
    return 0;
}
