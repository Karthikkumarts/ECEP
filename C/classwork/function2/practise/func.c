#include<stdio.h>
int add (int a,int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int main()
{
    int n;
    int (*fptr)(int,int);
    printf("press 1 for sum or 2 for sub \n enter the region : ");
    scanf("%d",&n);
    switch(n)
    {
	case 1:
	    fptr=add;
	    break;
	case 2:
	    fptr=sub;
	    break;
	default:
	    break;
    }

    printf("%d\n",fptr(5,4));
}
