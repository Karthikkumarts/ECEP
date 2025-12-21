/*Documentation
Name :KARTHIK KUMAR TS 
Date : 28-11-2021
Description :Read int val, Read 0 ≤ a ≤ b ≤ 31. Read an int n, put the (b-a+1) lsb’s of n into i[b:a]
Sample i/p : ./a.out
Sample o/p : Enter the value of 'n' : 11
Enter the value of 'I' : 174
Enter the value of 'a' : 3
Enter the value of 'b' : 5
The binary form of 'n' : 00000000 00000000 00000000 00001011
The binary form of 'I' : 00000000 00000000 00000000 10101110
Updated form of 'I'(158): 00000000 00000000 00000000 10011110
Want to continue ( y/Y ) : n
Documentation*/

#include<stdio.h>
int replace_nbits_from_pos(int ,int ,int );
int main()
{
    int num,n,I,a,b,replacebit;  //variable declaration
    char ch;
    do
    {
	printf("Enter the value of 'n' :");
	scanf("%d",&num);
	printf("Enter the value of 'I' :");
	scanf("%d",&I);
	printf("Enter the value of 'a' :");
	scanf("%d",&a);
	printf("Enter the value of 'b' :");
	scanf("%d",&b);
	if(a>0 && a<=31 && b>0 && b>a && b<=31)  //check a and b within the range
	{
	    printf("binary form of 'n' %d--->",num);  
	    for(int i=31;i>=0;i--)  //32 bit binary represantation of num 
	    {
		num & (1<<i)?printf(" 1 ") : printf(" 0 ");
	    }
	    printf("\n");
	    printf("binary form of 'I' %d--->",I);
	    for(int j=31;j>=0;j--)   //32 bit binary represantation of I
	    {
		I & (1<<j)?printf(" 1 ") : printf(" 0 ");
	    }
	    printf("\n");
	    replacebit=replace_nbits_from_pos(num,I,(b-a+1)); //function call
	    printf("updated form of 'I'(%d)-->",replacebit);
	    for(int k=31;k>=0;k--) //updated form of I value represented in 32 bit binary form  
	    {
		replacebit & (1<<k)?printf(" 1 ") : printf(" 0 ");
	    }
	    printf("\n");
	}
	else
	    printf("'a' and 'b' should be greter then 0 and equal to 31 and and b shoud be greater thean a\n");
	printf("do you want to continue?press y/Y :");
	getchar();
	scanf("%c",&ch);  //reading character from user
    }
    while(ch == 'y' || ch == 'Y'); //check entered character y or not
    return 0;
}
int replace_nbits_from_pos(int num,int I,int n)  //function defination
{
    int mask,extract,clear,final; //local variable declaration
    mask=(1<<n)-1;  
    extract=mask & num; //extract the (b-a+1) bits from number n
    clear=(~(mask << n)) & I; //clear (b-a+1) bits from b:a in number I
    final=((extract<<n))|clear; // bitwise ORing gives replacement
    return final; //return the final value to main function
}
