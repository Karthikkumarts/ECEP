/*Documentation
NAME                :KARTHIK KUMAR TS
Date                :12-11-2021
Description         :Wap to read 3 numbers a,r,n.generate AP,GP,HP
sample execution    :./progressions
Enter the First Number 'A': 2
Enter the Common Difference/Ratio 'R': 3
Enter the number of terms 'N': 5
AP = 2,5,8,11,14
GP = 2,6,18,54,162
HP = 0.5,0.2,0.125,0.0909091,0.0714285

 */
#include<stdio.h>  //headerfile
int main()        //main function
{
    int num,i,range=1;  //declaring int type variables
    char choice;       //declaring char type variables
    float HP;          //declaring float type variables
    for(i=0 ; i<10; i++) //calculating the value of 2^10
    {
	range=range*2;
    } 
    do                //do while loop
    {
	int A,R,N,AP,GP;float HP;   //declaring variables
	printf("Enter the First number 'A':\n");   //taking the value from the user
	scanf("%d",&A);  //reading the value and stores in &A
	printf("Enter the Common Difference/Ratio 'R':\n");
	scanf("%d",&R);  //reading the value and stores in &R
	printf("Enter the number of terms 'N':\n");
	scanf("%d",&N);   //reading the value and stores in &N
	if(A < range && R < range && N < range)  //condition for the N in between the range
	{
	    if (A > 0 && R > 0 && N > 0)  //condition for the A,R,N greater than zero
	    {
		AP=A,GP=A;   //assigning the value of A to AP and GP
		printf("AP = %d ",AP); //prints the value of first number(A)
		for(i=1; i < N; i++) //for loop for AP series
		{	 
		    AP = AP + R;  //adding next number and common ratio
		    printf(" %d",AP);
		}
		printf("\n");  //printing empty line
		printf("GP = %d ",GP); //prints the value of first number for GP
		for(i=1; i < N; i++) //for loop for GP series
		{
		    GP = GP * R; //multiplying next number and Common ratio
		    printf(" %d",GP);
		}
		printf("\n");
		AP=A;          
		HP = (float)1/AP; //we use float for decimal values
		printf("HP = %g ",HP);
		for(i=1; i < N; i++) //for loop for HP series
		{
		    AP = AP + R;	  
		    HP = (float)1/AP; //HP is reciprocal of AP
		    printf(" %g",HP);
		}
	    }
	    else
	    {    
		printf("please enter only positive values\n"); //prints this when user enters negative values
	    } 
	} 
	else
	{
	    printf("out of range\n");  //prints this when user enters the out of range number
	}
	printf("\n");
	printf("do you want to continue(y/Y):"); //prompting the user for running the code continously
	scanf("\n%c",&choice);  //reads and stores in &choice
    }while(choice == 'y');
    return 0;
} 

