/* Documentation 
Name        : KARTHIK KUMAR TS
Date        : 10-12-2021
Description : Print the values in sorted order without modifying or copying array
Sample execution : ./a.out
Enter the count of float elements need to store: 5
[0] = 20.5
[1] = 10.6
[2] = 5.6
[3] = -3.6
[4] = 1.5
Sorted elements: -3.60 1.50 5.60 10.6 20.50 
After sorting original array elements: 20.50 10.60 5.60 -3.60 1.50 

Do you want to continue(y/Y): n

 */
#include<stdio.h>
void float_array(float *arr, int size)         //function definition
{
    float large, small, temp;         //declaring local variables
    int j, i;

    printf("Sorted elements: ");       //to print sorted elements
    large = *(arr + 0);
    small = *(arr + 0);
    for (j = 0; j < size; j++)                       //Find the large and smallest array element
    {
	if (*(arr + j) < small)
	    small = *(arr + j);

	if (*(arr + j) > large)
	    large = *(arr + j);
    }
    printf("%.2f ", small);                    //To print smallest elements

    while( small != large)                    //To run the loop upto small equal to large
    {
	for(i = 0; i < size; i++)               //check any other variabes is greater than and not equal to smallest value
	{
	    if(*(arr + i) != small && *(arr + i) > small)
	    {
		temp = *(arr + i);
		break;
	    }
	}
	for (i = 0; i < size; i++)
	{
	    if(*(arr + i) < temp && *(arr + i) > small)
		temp = *(arr + i);
	}
	printf("%.2f ", temp);                   //prints all the sorted elements
	small = temp;
    }
    printf("\n");
    printf(" original array elements which entered: ");    //after sorting prints original array elements
    for (i = 0; i < size; i++)
	printf("%.2f ", *(arr + i));
    printf("\n");
}

int main()
{
    char choice;                                                  //Declaring the local variable
    do
    {
	int size, i, j, count = 0;
	printf("Enter the float elements of array : ");    //Enter the array size
	scanf("%d", &size);
	float arr[size];                    //declaring float type array
	for (i = 0; i < size; i++)        //reading elements from user
	{
	    printf("[%d] = ",i);
	    scanf("%f", &arr[i]);     //reading and storing elements in arr[]
	}
	float_array(arr, size);       //calling function 
	printf("\nDo you want to continue(y/Y): ");       //to continues the loop
	scanf("\n%c", &choice);
    }while(choice == 'y'|| choice == 'Y');         //checking entered choice 
    return 0;
}
