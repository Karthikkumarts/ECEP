/*Documentation
Name       : KARTHIK KUMAR TS
Date       : 08/11/21
Description: WAP to generate Fibonacci numbers
Sample i/p :entered number 8
Sample o/p : 0 1 1 2 3 5 8
Documentation*/	 

#include<stdio.h>
int main()
{
    int number,i,range1=1,range2,a,b,sum;
    char ch;
    for(i=0;i<20;i++)              // finding range between -2^20 to 2^20
    {
	range1= 2 * range1;          
    }
    range2= range1 * -1;  
    do 
    { 
	printf("enter a number:"); 
	scanf("%d",&number);
	a=0; //first number
	b=1; //second number
	if ( number > range2 && number < range1) //if entered number is given inside the range then continue
	{
	    if (number > 0) //if number is greater than 0
	    {
		while ( a <= number ) //loop runs upto a <= number
		{
		    printf("%d ",a); //printing the value of a
		    sum = a + b; // addition of a and b
		    a =  b; // storing b in a 
		    b = sum; // storing sum in b
		}
	    }
	    else if(number < 0) // if number is less than 0
	    {
		while ( a >= number &&  a <= (-number)) 
		{
		    printf("%d ",a); // printing  the value of a
		    sum = a - b; //subtracting a & b
		    a =  b; // storing the value of b in a
		    b = sum; // storing sum in b
		}
	    }
	}
	else
	    printf("entered number is out of range\n"); //if the entered number is not in range then printing this line
	printf("\n");
	printf("do you want to continue? press (y/Y):"); // to continue or not
	getchar();
	scanf("%c",&ch); 

    } 
    while (ch == 'y' || ch =='Y'); //if the given character is y or Y then continue
    return 0;
}
