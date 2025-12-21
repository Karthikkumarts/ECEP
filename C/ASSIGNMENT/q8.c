/*Documentation
Name            :KARTHIK KUMAR TS
Date            :09-11-21
Description     :Wap to print "hello" in x format
sample execution:./x_pattern
                 Enter a number lines : 5

		  Hello     Hello
      		   Hello  Hello
		    HelloHello
		   Hello  Hello 
		 Hello      Hello

	         Do you want to continue(y/Y): Y
	         Enter a number lines: 32
	         Number out of range
	         Do you want to continue(y/Y): y	 
		    
		 Enter a number lines : 6
		  Hello      Hello
		    Hello   Hello
		     HelloHello
		     HelloHello
		    Hello   Hello
		  Hello      Hello

		Do you want to continue(y/Y) : y
	        Enter a number lines: -3
	        Enter only positive values
*/
#include<stdio.h>  //header file

int main() 
{
 int row,col,n,i,range1=1;
     char choice;  //declaring variables
for(i=0;i<5;i++)              // finding range of 2^5
    {
	range1= 2 * range1;
    }     
 do  
 { 
  printf("Enter a number:"); //reading the value from user
  scanf("%d",&n);   //reading the n value and stores in &n
  if(n > 0)  //condition for given number is greater than zero
  {
  if ( n < range1 ) //condition for the number less than 32
     {	 
     for(row=1; row<=n; row++) //outer for loop for rows
     {    
       for(col=1; col<=n; col++) //inner for loop for columns
       {   
        if( (row==col) || ((row+col)==(n+1)) ) //condition for printing the hello
        {	 
        printf("Hello"); //prints the hello if above condition satisfies
        }
        if( (row==col) && ((row+col)==(n+1)) ) //condition for printing the hello
        {	       
        printf("Hello"); //prints the hello in reverse as above condition
        }       
        else
        {
        printf(" "); //else it prints the space
	} 
       }
       printf("\n"); //prints the next line  after running the inner for loop
     }
     } 
    else
    {	 
      printf("Number out of range\n"); //else number is out of range
     }
  }
  else
  {
      printf("Enter only +ve values");  //else prints the message if enter number is negative
  }
  printf("\n");  
  printf("Do you want to continue(y/Y)?"); //to run the code continously using do while loop
  scanf("\n%c",&choice); //reads the character from the user and stores in &choice
  } while ( choice == 'y' || choice == 'Y' );
  return 0;
}  		     
