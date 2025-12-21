/* Documentation

Name        : KARTHIK KUMAR TS
Date        : 18-11-2021
Description : WAP to check if number is even or odd using bitwise operators.
Sample Execution : ./a.out
	Enter the value of 'N' : 4
	4 is +ve even number
	Do you want to continue(y/Y): y
	Enter the value of 'N' : -5
	-5 is -ve odd number
	Do you want to continue(y/Y): n

Documentation */ 

#include<stdio.h>
int main()
{
    int num;              //declaring integer variables
    unsigned int mask = 1 << 31;   //assigning mask value
    int range1, range2;  //declaring integer variables to find range
    char ch;           // declaring ccharacter type variable

    range1 = 1 << 20;   //fixing the range1 as 20^20
    range2 = range1 * -1;  //fixing the range2 as -20^20
    do
    {
	printf("Enter the number:");
	scanf("%d",&num);       //reading a number from user
         if (num != 0)
	 {
	if ( num <= range1 && num >= range2 )   //checking the number is in correct range or not
	{
	    if ( num & mask )    //checking MSB bit to find number is +ve or not
	    {
		if ( num & 1 )  //cheking LSB bit to number is even or odd
		    printf(" %d is -ve Odd number\n",num);
		else
		    printf(" %d is -ve even number\n",num);
	    }
	    else
	    {
		if ( num & 1 )    //checking LSB bit to find number is even or odd
		    printf(" %d is +ve Odd number\n",num);
		else
		    printf(" %d is +ve even number\n",num);
	    }
	}
	else
	{
	    printf("Number is out of range\n");    //printing a messsage if entered number is not in correct range
	}
	 }
	else
	{
	    printf(" 0 is neither even nor odd\n");      
	}
	printf("Do you want to continue ? (y/Y)");   //to continue the code press y/Y
	getchar();     //it takes only single character
	scanf("%c",&ch);  //reading a character from user
    }while ( ch == 'y' || ch == 'Y' );   //checking the correct character to continue the loop

    return 0;
}
