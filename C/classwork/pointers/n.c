#include<stdio.h>
void largest(int *a,int *b,int size)
{
    *b=a[0];
    for(int i=1;i<size;i++)
    {
	if(a[i] > *b)
	    *b=a[i];
    }

}
int main()
{
   int a[5]={1,10,23,12,8};
   int max;
    largest(a,&max,5);
    printf("%d",max);
}
