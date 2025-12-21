#include<stdio.h>
int sum(int num1, int num2); // function prototype

/*function defination */
int sum(int num1, int num2)
{
int total;
    total= num1 + num2;
return total; //return value
}
int main () //calling function here is main()
{
    int res;
    int a=100,b=200;
    res = sum(a,b); // function call/invocation
    printf("res=%d\n",res);
    res =sum(10,20); // function call/invocation
    printf("res=%d\n",res);
    return 0;
}
