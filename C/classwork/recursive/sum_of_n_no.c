#include<stdio.h>
int sum_of_n_no(int num)
{
if(num == 1)
    return 1;
else
return  num +sum_of_n_no(num - 1);
}

int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("sum of %d number is %d ",num,sum_of_n_no(num));
}
