/*Documentation
Name : KARTHIK KUMAR TS 
Date : 15/12/2021
Description : Generate Fibonacci series
Input : None
Output : Enter the number: 21
0, 1, 1, 2, 3, 5, 8, 13, 21
Do you want to continue (y/Y): 
Documentation*/
#include<stdio.h>
void fibonacci(int limit, int num1, int num2)
{
    if(limit > 0) //Checking if the number is a positive
    {
	if((num1 + num2) <= limit) //Repeating the loop till the last number of the series is less than equal to N
	{
	    printf(", %d",(num1 + num2));
	    num2 += num1;
	    num1 = num2 - num1;
	    fibonacci(limit, num1, num2);
	}
    }
    else 
    {
	if((num1 - num2) >= limit && (num1 - num2) <= -limit) //Repeating the loop till the last number of the series is less than equal to negative of N and greater than equal to N where N is a negative number
	{
	    printf(", %d",(num1 - num2));
	    num2 = num1 - num2;
	    num1 = num1 - num2;
	    fibonacci(limit, num1, num2);
	}
    }
}
int main()
{
    int N, lower_limit, upper_limit = 1;
    char option = 'y';
    for(int i = 0; i < 20; i++) //Loop to repeat from 0 to 20 for calculating the upper and lower limits
    {
	upper_limit *= 2;
    }
    lower_limit = upper_limit * -1;
    do
    {
	printf("Enter the number: ");
	scanf("%d",&N);
	if(N > lower_limit && N < upper_limit) //Checking the condition if N is within the upper and lower limits
	{
	    int num1=0, num2=1;
	    if(N == 0)
		printf("%d",num1);
	    else
	    {
		printf("%d, %d",num1,num2);
		fibonacci(N,num1,num2);
	    }          
	}
	else
	    printf("Error : Number out of range, please enter the value -2^20 < 'N' < 2^20\n");
	printf("\n\nDo you want to continue (y/Y): ");
	scanf(" %c",&option);
    }while(option == 'y' || option == 'Y'); //loop will be repeated for the option y/Y given as input
    return 0;
}
