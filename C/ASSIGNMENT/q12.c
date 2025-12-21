/*Documentation
Name            : KARTHIK KUAMR TS
Date            : 18-11-2021
Description     : To print bits of signed and unsigned types for given number and check for 2's compliment
sample execution: ./2s compl
                  Enter the number : 12
		  +12 -> 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
		         0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0
                  -12 -> 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
		         1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1 0 0
	          Do you want to continue(Y/y): n	
*/

#include<stdio.h>   
int main()         
{
   int num,i,num1; 
   char choice;    
   do               //do while loop to continue the loop
   {
     printf("Enter the number");  
     scanf("%d",&num);           
     printf("%d...>",num);
     for(i = 31;i >= 0;i--)       //for loop starts from 31 because the result should be in 32bit
     {
       num & (1 << i)? printf("1"):printf("0");  //printing values using ternary operator
     }
     printf("\n");    //prints the space
     num1 = ~num + 1;   //2's compliment to read the number
     printf("%d...>",num1);
     for(i = 31 ; i >= 0 ; i--)
     { 
       num1 & (1<<i)? printf("1"):printf("0"); //using ternary operator
     }
     printf("\n");
     printf("Do you want to continue(y/Y):"); //to continue the loop using do while loop
     scanf("\n%c",&choice); //reading the character 
   }while(choice == 'y');
}  
