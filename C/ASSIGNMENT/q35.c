/*
Name     : KARTHIK KUMAR TS
Date       : 22/12/2021
Description: Variance calculation with static arrays & with dynamic arrays
Input      : Enter the no. of elements: 3
1. Static allocation
2. Dynamic allocation
Enter your choice : 2
[0] -> 1
[1] -> 2
[2] -> 3
x(input)          D = x - mean             D^2
1                 -1                      1             
2                 0                       0             
3                 1                       1             
Sum = 6                                  Sum = 2
The Variance of the entered numbers is 0.666667

Do you want to continue(Y/y): n
 */
#include <stdio.h>
#include <stdlib.h>
float variance( int *arr, int size );  //function prototype
int main()
{
    char choice;
    do
    {
	int size, option;  //integer declaration
	printf("Enter the no. of elements: ");
	scanf("%d",&size);  //read value for size
	printf("1. Static allocation\n2. Dynamic allocation\nEnter your choice : ");
	scanf("%d",&option);
	switch ( option )  //using switch case
	{
	    case 1:
		{
		    int arr[size];  //array declaration
		    for ( int i = 0; i < size; i++ )
		    {
			printf("[%d] -> ",i);
			scanf("%d", &arr[i]);  //read value for array
		    }
		    float var = variance(arr, size);  //call function and store return value in var
		    printf("The Variance of the entered numbers is %g\n", var );
		    break;
		}
	    case 2:
		{
		    int *arr = NULL;  //declared and initialized integer pointer
		    arr = malloc( size * sizeof(int) );  //memory allocated
		    if ( arr == NULL )  //checking memory allocated or not
		    {
			printf("memory not allocated");
			exit(1);
		    }
		    for ( int i = 0; i < size; i++ )  //iterate over size
		    {
			printf("[%d] -> ",i);
			scanf("%d", &arr[i]);  //read value for array
		    }
		    float var = variance(arr, size);  //call function and store return value in var
		    printf("The Variance of the entered numbers is %g\n", var );
		    if ( arr != NULL )
		    {
			free(arr);  //making allocated memory free
			arr = NULL;
		    }
		    break;
		}
	    default:
		printf("error: invalid choice\n");
	}
	printf("\nDo you want to continue(Y/y): ");
	scanf("\n%c",&choice);
    }while ( choice == 'Y' || choice == 'y' );
}

float variance( int *arr, int size )  //function
{
    float mean = 0, temp, temp1, sum = 0, sum1 = 0;  //float declaration and initialization
    for ( int i = 0; i < size; i++ )
	mean = arr[i] + mean;  //finding sum
    mean = mean / (float)size;  //finding mean
    printf("x(input)          D = x - mean             D^2\n");
    for ( int i = 0; i < size; i++ )  //iterate over size
    {
	temp = arr[i] - mean;  //finding D
	temp1 = temp * temp;  //finding D^2
	sum += arr[i];  //finding input sum
	sum1 += temp1;  //finding sum of D^2
	printf("%-14d    %-20g    %-15g\n", arr[i], temp, temp1);
    }
    printf("Sum = %g                                  Sum = %g\n", sum, sum1);
    return sum1 / size;  //return variance
}
