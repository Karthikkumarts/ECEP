/*Documentation
Name :KARTHIK KUMAR TS
Date : 17-11-2021
Description :WAP to check your processor endianess
Sample i/p : ./a.out
Sample o/p : Enter any number:124
Little Endian system
Do you want to continue(y/Y) : y
Enter any number : 0
Little Endian system
Do you want to continue(y/Y) : n */
#include<stdio.h>
int main()
{
    char ch,*cptr; 
    int num,*iptr; 
    iptr = &num;
    cptr = (char *)iptr;  //typecasting process
    do
    {
	printf("Enter any number :");
	scanf("%d",&num);
	if(*cptr == *(char *)iptr)   
	    printf("little endian\n");
	else
	    printf("big endian\n");
	printf("Do you want to continue?press(y/n) :"); //for continue
	scanf("\n%c",&ch);
    }while(ch == 'y' || ch == 'Y'); //check the entered character is y or not
    return 0;
}
