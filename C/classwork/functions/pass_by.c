#include<stdio.h>
int main()
{
    int num =5,num2=18;
    printf("before modification = %d %d\n",num,num2);

	modify(&num,&num2);
    printf("after modification =%d %d\n",num,num2);
}
modify(int *n,int *n2)
{
    *n=*n+1;
    *n2=*n2+1;
}

