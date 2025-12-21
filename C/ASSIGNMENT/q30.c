/*Documentation
Name            : KARTHIK KUMAR TS
Date            : 09-12-2021
Description     : WAF read_int to read an integer
sample execution: ./a.out
Enter the number : Enter a number: 212
The number is 212
Do you want to continue(Y/y): n 
 */
#include <stdio.h>
#include <stdio_ext.h>  //header for fpurge
int read_int(char *num);
int main ()
{
    char ch;
    do
    {
	int num;                                      //declaration of local variable 
	char cha;                                    //declaration of character
	printf("Enter a number: ");
	__fpurge(stdin);
	num = read_int(&cha);                               //function call
	__fpurge(stdin);
	printf("The num is %d\n",num);
	printf("Do you want to continue?press(y/n) :");
	scanf("\n%c",&ch); //read the character from user
    }
    while (ch == 'y' || ch == 'Y'); //checking for user enter y or not
    return 0;
}
int read_int(char *num)
{
    int n = 0,flag = 1;
    for (int i = 0; (*num = getchar()) != '\n';i++)       //loop runs upto the "\n"  character
    {
	if (i == 0 && *num == '-' || *num == '+')      //to check 1st entered character is '-' or '+'
	{
	    if (*num == '-')                     //if 1st character is negative then flag variable is updated by -1
	    {
		flag = -1;
	    }
	    continue;                            //move to the incrementation of loop
	}
	if (*num >= '0' && *num <= '9')            //to check whether the character is digit or not
	{
	    n = n * 10 + (*num - 48);
	}
	else
	{
	    break;
	}
    }
    return n * flag;
}
