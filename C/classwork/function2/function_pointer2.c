#include<stdio.h>
int add(int num1,int num2,int num3)
{
    return num1+num2+num3;
}
int sub(int n1,int n2,int n3) 
{
    return n1-n2-n3;
}
int main()
{
  int (*fptr)(int,int,int);
      fptr=add;
  printf("%d\n",fptr(2,4,5));
  printf("%d\n",(*fptr)(2,4,4));


  fptr=sub;
  printf("%d\n",fptr(-5,4,9));
  printf("%d\n",(*fptr)(8,4,5));

}
