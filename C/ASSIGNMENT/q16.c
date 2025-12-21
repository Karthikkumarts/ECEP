/*
Name             : KARTHIK KUMAR TS
Date             : 30/01/2021
Description      : W.A.P to read an int , a number n. Circular right shift and left shift the int by n
Sample execution :./a.out
Enter num : 12
Enter n : 3
possible operations
1.circular right shift
2.circular left shift
Enter your choice : 1
The binary form of number : 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0
After circular right shift by 3
The binary form of number : 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 
Do you want to continue [Y/N]:n
 */

#include<stdio.h>
int circ_right_shift(int,int);  //function prototype
int circ_left_shift(int,int);   //function prototype
int main()
{
    //variable initialization
    int num,n,choice,res;
    char ch;
    do
    {
	printf("Enter num :\n");
	scanf("%d",&num);
	printf("Enter n :");
	scanf("%d",&n);
	printf("position operation\n1.circular right shift\n2.circuler left shift\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)  //switch case for selecting any case and do particular task
	{
	    case 1:
		printf("the binary form of number :");  
		for(int i=31;i>=0;i--)       //for printing binary form of entered number
		{
		    num&  1<<i?printf(" 1 ") : printf(" 0 ");
		}
		printf("\n");
		printf("after circular right shift by %d\nthe binary form of number :",n);
		res=circ_right_shift(num,n);
		for(int j=31;j>=0;j--)   //printing the binary form of shifted number
		{
		    res& 1<<j?printf(" 1 ") : printf(" 0 ");
		}
		printf("\n");
		break;
	    case 2:	
		printf("the binary form of number :");
		for(int i=31;i>=0;i--)  //printing binary form of entered number
		{
		    num& 1<<i?printf(" 1 ") : printf(" 0 ");
		}
		printf("\n");
		printf("after circular left shift by %d\nthe binary form of number :",n);
		res=circ_left_shIft(num,n); 
		for(int j=31;j>=0;j--)  //printing binary form of shifted number
		{
		    res& 1<<j?printf(" 1 ") : printf(" 0 ");
		}
		printf("\n");
		break;
	}
	printf("Do you want to continue ? press y/Y :");               //<--------to continuee the process 
	getchar();
	scanf("%c",&ch);                             //<---------to read a character from user
    }while(ch == 'y' || ch == 'Y');                           //<-------------checking the option is y or not
    return 0;
}
int circ_right_shift(int num,int n)  //function defination
{
    int final,output;
    final= ~(((1<<n)-1)<<(32-n));
    output=((num>>n)&final)|(num<<(32-n));
    return output; //return final value to the main function
}
int circ_left_shift(int num,int n)  //function defination
{
    int final,output;
    final= ~(((1<<(32-n))-1)<<n);
    output=((num<<n)|(num>>(32-n))&final);
    return output;//return final value to the main function
}
