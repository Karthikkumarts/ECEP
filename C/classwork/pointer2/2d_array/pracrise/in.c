#include<stdio.h>
#define size 5
int arr[size];

void input()
{
    printf("enter the elements:  ");
    for(int i = 0 ; i < size ; i++)
    scanf("%d ",&arr[i]);

}

void output()
{
    printf("printing the numbers : ");
    for(int i = 0 ; i < size ; i++)
    printf("%d ",arr[i]);

}

int main()
{
    input();
    output();
}
    
