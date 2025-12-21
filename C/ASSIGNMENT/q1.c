/*Documentation
Name : KARTHIK KUMAR TS
Date : 31/10/21
Description : WAP to check if number is odd or even
Sample i/p : ./a.out
Sample o/p : Enter a number:-4
             -4 is -ve even number
	     Do you want to continue? press y:y
	     Enter a number:5
	     5 is +ve odd number
Documentation*/	 

#include<stdio.h>
int main()
{
    int num,i,range1=1,range2;
    char ch;
    for(i=0;i<20;i++)              // finding range between -2^20 to 2^20
    {
	range1= 2 * range1;          
    }
    range2= range1 * -1;    
    do                                
   {
	printf("enter a number:");
	scanf("%d",&num);
	if(num >= range2 && num <= range1)     // cheking number range from -2^20 to 2^20
	{
	    if(num == 0)                      // if number is 0
	    {
		printf(" 0 is neither odd nor even");
	    }
	    if(num > 0)                         	    //to print +ve even & odd numbers
	    {
		if( num % 2 == 0)                           //to check number is even or not
		    printf("%d is +ve even number\n",num);
		else
		    printf("%d is +ve odd number\n",num);
	    }
	    else if(num < 0)            	    //to print -ve even & odd numbers
	    {
		if( num % 2 == 0)                              //to check number is even or not
		    printf("%d is -ve even number\n",num);
		else
		    printf("%d is -ve odd number\n",num);
	    }
	}
	    else
		printf("Number is out of range");         //printig a msg if number is not in the range

	printf("Do you want to continue ? press y:");               //to continuee the process 
	getchar();
	scanf("%c",&ch);                             //to read a character from user
    }while(ch == 'y');                           //checking the option is y or not
    return 0;
}

