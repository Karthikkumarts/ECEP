#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);

int main()
{
    int a,b;
    //prompt the user to enter the number
    printf("enter two number : ");
    scanf("%d %d",&a,&b);

    printf("addition of two numbers : %d\n",add(a,b));
    printf("substraction of two numbers : %d\n",sub(a,b));
    return 0;
}
