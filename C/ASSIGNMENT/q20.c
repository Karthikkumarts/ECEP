/*Documentation
Name        : KARTHIK KUMAR TS
Date        : 13-12-2021
Description : WAF for pre and post increment
Sample execution : ./a.out
Enter a number: 7
Enter the operation:
1. pre-increment
2. post-increment
Choice: 1
After pre-increment ret === 8, num === 8
Do you want to continue(y/Y): y
Enter a number: 7
Enter the operation:
1. pre-increment
2. post-increment
Choice: 2
After post-increment ret === 7, num === 8
Do you want to continue(y/Y): n

*/
#include<stdio.h>
int *pre_increment(int *i);  //function prototype
int *post_increment(int *i);  //function prototype
int main()
{
    char ch;
    do
    {
	int num, *ret, choice;      //declaring local variables
	printf("Enter a number: ");
	scanf("%d",&num);              //reading number from user
	printf("Enter the operation:\n");
	printf("1. pre-increment\n2. post-increment\n");
	printf("Choice: ");
	scanf("%d", &choice);              //reading choice from user

	switch (choice)         //switch case to perform opeartion based on choice
	{
	    case 1:                    //case-1 to perform pre_increment operation
		ret = pre_increment(&num);        //calling function and storing return adress in *ret
		printf("After pre-increment ret = %d, num = %d\n", *ret, num);
		break;
	    case 2:            //case-2 to perform post_increment operation
		ret = post_increment(&num); //calling function and storing return address in *ret
		printf("After post-increment ret = %d, num = %d\n", num, *ret);
		break;

	    default:  
		printf("Enter a correct choice [ 1 or 2]\n");
		break; 
	}
	printf("Do you want to continue(y/Y): ");    //to continue the loop
	scanf(" %c",&ch);     //reading character
    }while ( ch == 'y' || ch == 'Y');      //checking condition to run the loop
}

int *pre_increment(int *i)   //function definition
{
    unsigned int mask = 1;   //initializing local variable mask
    while ( *i & mask)          //performing pre_increment operation using bitwise operaters
    {
	*i = *i & (~mask);
	mask = (mask << 1);
    }
    *i = *i | mask ;
    return i;         //returning address of i 
}
int *post_increment(int *i)    //function definition
{
    int *j;      //decalaring pointer type variable
    *j = *i;
    unsigned int mask = 1;
    while ( *j & mask)       //performing post_increment operation using bitwise operators
    {
	*j = *j & (~mask);
	mask = (mask << 1);
    }
    *j = *j | mask ;
    return j;       //returning address of j
}
