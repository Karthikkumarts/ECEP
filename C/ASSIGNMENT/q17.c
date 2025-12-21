/*Description
Name            :KARTHIK KUMAR TS
Date            :29/11/2021
Description     :WAP to swap two variables by using pass by reference method
Sample execution:

Enter a number num1: 5
Enter a number num2: 6
Befor swapping num1 = 5 and num2 = 6
After swapping
num1 = 6
num2 = 5 */

#include<stdio.h>
void swap(int *a, int *b );
int main()
{
    int a,b; 
    char ch;
    do //do-while loop
    {
	printf("enter the 1st number: ");
	scanf("%d",&a);  //entering 1st number
	printf("enter the 2st number: ");
	scanf("%d",&b);  // entering 2nd number
	printf("before swap a= %d b=%d\n",a,b); //before swapping
	swap(&a,&b);
	printf("after swapping a=%d b=%d\n",a,b); //after swapping

	printf("do you want to continue press y/Y:"); 
	getchar();
	scanf("%c",&ch); //press y to continue
    }while (ch == 'y' || ch =='Y');
    return 0;
}
void swap(int *num1, int *num2)
{
    *num1=*num1 ^ *num2; //using bitwise XOR swapping the two numbers
    *num2=*num1 ^ *num2;
    *num1=*num1 ^ *num2;
} 

