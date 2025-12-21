#include<stdio.h>
int main()
{
   int a[3][3]={1,2,3,4,5,6,7,8,9};
  printf("sizeof(a) = %u\n",sizeof(a));
  printf("sizeof(a[0]) =  %u\n",sizeof(a[0]));
  printf("sizeof(*a) = %u\n",sizeof(*a));
  printf("sizeof(a[0][0]) =  %u\n",sizeof(a[0][0]));

  printf("a = %lu\n",a);
  printf("a+1 = %lu\n",a+1);
  printf("&a+1 = %lu\n",&a+1);
  printf("&a[0] = %lu\n",&a[0]);
  printf("&a[0]+1 = %lu\n",&a[0]+1);
  printf("a[0]+1 = %lu\n",a[0]+1);
  printf("&a[0][0]+1 = %lu\n",&a[0][0]+1);
}


