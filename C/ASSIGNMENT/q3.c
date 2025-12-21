/*Documentation
Name          : KARTHIK KUMAR TS
Date          : 08/11/21
Description   : WAP to check if number is perfect or not
Sample i/p    : ./a.out
sample o/p    : Enter a number:6
              yes,entered number is a perfect number
Documentation*/	 

#include<stdio.h>
int main()
{
    int number,mod,i,sum;
    char ch;
    do 
    {
	printf("enter a number:");
	scanf("%d",&number);
	sum=0;  // intialising sum to 0
	if ( number < 0)
	    printf("please enter positive numbers\n"); //if number is less than 0 then print this line
	else if (number > 0 &&  number < 220 ) //if entered number is less greater than 0 and less than 220 then continue
	{ 
	for (i=1;i<number;i++)
	{  
	    mod =(number%i); //modulus operator
	    if (mod == 0) //if modulus is 0 then continue
	    {
		sum=(sum+i); //adding i with sum if mod=0
	    }
	}
	printf("sum is %d\n",sum); //printing total sum
	if (sum == number ) //if sum is equal to num then it is perfect number or not
	    printf("Entered number %d is perfect number\n",number);
	else
	    printf("Entered number %d is not a perfect number\n",number); 
	}
	else
	    printf("the number is entered is out of range\n"); //if the number is out of range then it  prints this line
	printf("do you want to continue? press(y/Y):");
	getchar();
	scanf("%c",&ch);
    }
    while (ch == 'y' || ch == 'Y'); //if the entered  character is y or Y then it continues
    return 0;
}
