/*Documentation
Name : KARTHIK KUMAR TS
Date :18-11-2021
Decreption :finding the median between two arrays
Assignment number : A09_median.c
Sample execution
Input  : gcc A09_median.c
Output : Enter the array1 size : 5
Enter the array1 elemets : 1 2 5 3 4
Ater sorting : 1 2 3 4 5
median1 : 3
Enter the array2 size : 6
Enter the array2 elements : 2 3 4 7 1
After sorting :1 2 3 4 5 7
median2 : 3.5
median of both arrays : 3.25
Do you want to continue? press(Y/y)
Documentation */

#include<stdio.h>
int main()
{
    char ch;
    do
    {
	int n,i,a,j;
	float median1,median2,median;
	printf("enter the size of array :");
	scanf("%d", &n);                         //reading size from user
	int number1[n];
	printf("Enter the array1 elements :");
	for(i = 0; i < n; ++i)                 //enter elements always shoud be greater then size(n)
	    scanf("%d",& number1[i]);        // reading the elements from the user

	for (i = 0;i < n; i++)               //entered elements always should be greater then size(n)
	{
	    for(j = i + 1; j < n; j++ )       //j is depend on the i because we are doing sorting
	    {
		if(number1[i] > number1[j])     //array i is always greaten then array j
		{
		    a = number1[i];                 //array iare stored in a
		    number1[i] = number1[j];    //array j are dtored in array i
		    number1[j] = a;             // a is stored in array j
		}
	    }
	}	
	printf("after sorting : ");
	for(i = 0; i < n; i++)
	    printf("%d ", number1[i]);    
	printf("\n");
	if(n % 2 == 0)    //here to finding the entered size is even or odd
	{
	    median1 = (number1[(n) / 2 - 1] + number1[n / 2]) / 2.0;  //entered size is even this formula is executated
	    printf("median1= %g",median1);
	}
	else
	{
	    median1 = number1[(n) / 2];       //entred size is odd this formula is executated
	    printf("median1= %g",median1);
	}
	printf("\n");
	printf("enter the size of array2 :");
	scanf("%d", &n);                 //reading the array2 size from user
	int number2[n];    
	printf("Enter the second array elements :");
	for(i = 0; i < n; ++i)
	    scanf("%d",& number2[i]);     //reading the array2 elements from the user

	for (i = 0;i < n; ++i)              //size is always less the elements
	{
	    for(j = i + 1; j < n; ++j )     
	    {
		if(number2[i] > number2[j])
		{
		    a = number2[i];                      //array2 i elements are stored in a
		    number2[i] = number2[j];         //arra2 j  elements are stored in i
		    number2[j] = a;                  // a elements are stored in array2 j 
		}
	    }
	}	
	printf("after sorting : ");
	for(i = 0; i < n; ++i)
	    printf("%d ", number2[i]);     //accending oredred elements are printing
	printf("\n");
	if(n % 2 == 0)                     //finding the entred size is even or odd
	{
	    median2 = (number2[(n) / 2 - 1] + number2[n / 2]) / 2.0;     //entred size is even ths formula can executed
	    printf("median2= %g",median2);     //printing the median of array2 elements
	}
	else
	{
	    median2 = (number2[(n) / 2]);       //entred size is odd this fomula can executed
	    printf("median2= %g",median2);      //priting the  median of array2 element
	}
	printf("\n");
	median =(median1 + median2) / 2.0;    //fing the median of both arrays using this formula
	printf("median of both arrays : %g",median);
	printf("\n");
	printf("Do you want to continue : press (Y/y): ");
	getchar();               //it is takes only single character only                  
	scanf("%c", &ch);   //reading the character from the user
    }while(ch == 'Y' || ch == 'y');  //comparing the character is correct or not
    return 0;
}
