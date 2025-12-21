#include<stdio.h>
union device
{
    char ch;
    int x;
    double d;
};

int main()
  {
  union device dev;
  printf("size od union = %lu\n",sizeof(union device));
  dev.x=1;
  printf("dev.x = %d\n",dev.x);
  dev.d=0.7;
  printf("dev.x = %d\n",dev.x);
  printf("dev.d = %f\n",dev.d);
  return 0;
  }
