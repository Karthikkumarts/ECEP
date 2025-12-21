
/*
Name       : KARTHIK KUMAR TS
Date       : 22/12/2021
Description: Implement calc_mean for all data types
Input      : Enter the size: 3
1. int
2. short
3. float
4. double
Enter the choice: 1
Enter 3 elements
arr[0] --> 1
arr[1] --> 2
arr[2] --> 3
Output       : The mean value: 2

Do you want to continue(Y/y): n
 */
#include <stdio.h>
double calc_mean( void *ptr, int size, int option );  //function prototype
int main()
{
    char choice;
    do
    {
	int size, option;  //integer declaration
	printf("Enter the size: ");
	scanf("%d",&size);  //read value for size
	printf("1. int\n2. short\n3. float\n4. double\nEnter the choice: ");
	scanf("%d",&option);  
	switch (option)  //using switch case
	{
	    case 1:
		{
		    int arr[size], mean;
		    printf("Enter %d elements\n", size);
		    for ( int i = 0; i < size; i++ )  //iterate over size
		    {
			printf("arr[%d] --> ",i);
			scanf("%d", &arr[i]);  //read value for int array
		    }
		    mean = calc_mean( arr, size, option );  //call function and return value assign to mean
		    printf("The mean value: %d\n",mean);
		    break;
		}
	    case 2:
		{
		    short arr[size], mean;
		    printf("Enter %d elements\n", size);
		    for ( int i = 0; i < size; i++ )
		    {
			printf("arr[%d] --> ",i);
			scanf("%hd", &arr[i]);  //read value for short array
		    }
		    mean = calc_mean( arr, size, option );
		    printf("The mean value: %hd\n",mean);
		    break;
		}
	    case 3:
		{
		    float arr[size], mean;
		    printf("Enter %d elements\n", size);
		    for ( int i = 0; i < size; i++ )
		    {
			printf("arr[%d] --> ",i);
			scanf("%f", &arr[i]);  //read value for float array
		    }
		    mean = calc_mean( arr, size, option );
		    printf("The mean value: %g\n",mean);
		    break;
		}
	    case 4:
		{
		    double arr[size], mean;
		    printf("Enter %d elements\n", size);
		    for ( int i = 0; i < size; i++ )
		    {
			printf("arr[%d] --> ",i);
			scanf("%lf", &arr[i]);  //read value for double array
		    }
		    mean = calc_mean( arr, size, option );
		    printf("The mean value: %g\n",mean);
		    break;
		}
	    default:
		printf("Error: Invalid choice\n");
	}
	printf("\nDo you want to continue(Y/y): ");
	scanf("\n%c",&choice);
    }while ( choice == 'Y' || choice == 'y' );  //using do while if condition is true repeat the process
}
double calc_mean( void *ptr, int size, int option )  //function
{
    switch (option)
    {
	case 1:
	    {
		int sum = 0;
		for ( int i = 0; i < size; i++ )
		    sum += *((int *)ptr + i);  //type casted ptr to intand find sum
		return sum / size; //return mean
		break;
	    }
	case 2:
	    {
		short sum = 0;
		for ( int i = 0; i < size; i++ )
		    sum += *((short *)ptr + i); //type casted ptr to short and find sum
		return sum / size; //return mean
		break;
	    }
	case 3:
	    {
		float sum = 0;
		for ( int i = 0; i < size; i++ )
		    sum += *((float *)ptr + i); //type casted ptr to float and find sum
		return sum / size; //return mean
		break;
	    }
	case 4:
	    {
		double sum = 0;
		for ( int i = 0; i < size; i++ )
		    sum += *((double *)ptr + i); //type casted ptr to double and find sum
		return sum / size;  //return mean
		break;
	    }
    }
}
