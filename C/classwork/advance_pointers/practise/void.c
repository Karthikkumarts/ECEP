#include<stdio.h>
int main()
{
  int a[5]={1,30,3,4,5};
  void *ptr=&a;

  printf("%d",*(int *)ptr);
  printf("%d",*(int *)ptr +1 );
  printf("%d",((int *)ptr)[1]);
}
