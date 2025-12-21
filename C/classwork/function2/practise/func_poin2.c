#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a - b;
}

int (*fptr[])(int,int)={sum,sub};

int main()
{
    int a=10,b=5;
    printf("sum  = %d\n",fptr[0](a,b));
    printf("sub  = %d\n",fptr[1](a,b));

}
