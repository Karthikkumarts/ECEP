/* Documentation
Name : KARTHIK KUMAR TS
Date : 22-11-2021
Assignment Number : A06_prime_numbers.c
Decreption       : print the prime numbers
Sample execution : gcc A06_prime_numbers>c
Input  : Enter the number : 25
Output : The prime numbers are : 2 3 5 11 13 17 19 23
         Do you want to continue? press(y/Y) :
Documents */

#include<stdio.h>
int main()
{
    char ch;
    do
    {

    int n,i,range = 2;
    printf("Enter the number: ");
    scanf("%d", &n);                  
    for(int k = 1 ; k < 20 ; k++)        //range is running
    range = 2 * range;                   //getting the range value
    if ( n < range)                       //comparing the range 
    {
	if (n > 0)                            //finding the number is +Ve or -Ve
	{
	    int arr[n];                    //taking the size of an array
	    for(i = 1; i < n; i++) 
	    {
		arr[i] = i + 1;            //assign the numbers
	    }
	    for(i = 1; i < n; i++)
	    {	
		if(arr[i] != 0)            //assigned value is not be zero
		{
		    for(int j = arr[i] * arr[i] ;j <= n; j+= arr[i])     //here using the compound statement
		    {
			arr[j-1] = 0;    
		    }
		}
	    }
	    printf("The prime numbers are: ");
	    for(i = 1; i < n; i++)
	    {
		if(arr[i] != 0)               //number not should be in zero
		{
		    printf("%d ",arr[i]);           //printing the prime numbers
		}
	    }
       	}
	else
	{ 
	    printf("Error : Invalid Input");   // if you entered -ve number this is printing
	}
    }
    else
    {
	printf("Entered number %d is out of range",n);
    }
    printf("\n");
    printf("Do you want to continue? press(y/Y) :");
    getchar();               //takes only the single character input only
    scanf("%c", &ch);        //reading the character from the user
    }while(ch == 'y' || ch == 'Y');
    return 0;

}
