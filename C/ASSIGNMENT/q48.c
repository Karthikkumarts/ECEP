/*
Name: KARTHIK KUMAR TS
Date:26/11/2021
Description: WAP to generate the consecutive NRPS of length n using k distinct character
sample i/p: ./a.out 
sample o/p:Enter the number characters C:3
Enter the length of the string N:6
Enter 3 distinct characters:abc
Possible NRPS is:abcbca
Do you want to continue (Y/y):y
Enter the number characters C:3  
Enter the length of the string N:6
Enter 3 distinct characters:abb
Error:Please enter distinct characters
Do you want to continue (Y/y):y
Enter the number characters C:-1
Error:C value should be in between 1 and 10
Do you want to continue (Y/y):n

 */

//include header file

#include<stdio.h>
char distinct(char *s, int c, int n, char *str1)			//function defination
{
    int i, j, count = 0;
    for(i = 0;i < n;i++)								//for loop for genrate the disticnt characters
    {
	if((i % c) == 0 && (i != 0))
	{
	    count++;
	}
	str1[i] = s[(i + count) % c];
    }
    *(str1 + n)='\0';
}
int main()	//main function
{
    char option;
    do{
	//variables declaration
	int c, n, i, j, flag = 0;
	printf("Enter the number characters C:");
	scanf("%d", &c);

	if((c >= 1) && (c <= 10))	//if condition for cheaking the c value
	{
	    char str[c];						//string declaration
	    printf("Enter the length of the string N:");
	    scanf("%d", &n);
	    if(n > c)		//condition for n value is greater than c
	    {
		char str1[n];
		printf("Enter %d distinct characters:", c);
		scanf("%s", str);

		for(i = 0; i < c; i++)    //for loop for cheaking the given string is having same charecter
		{
		    for(j = i+1;  j < c; j++)
		    {
			if(str[i] == str[j])
			{
			    flag = 1;
			    break;
			}
			if( flag != 0)
			    break;
		    }
		}
		if(flag == 0)	//cheak flag bit is set or not
		{
		    distinct(str, c, n, str1);		//function call
		    printf("Possible NRPS is:%s\n", str1);
		}
		else
		{
		    printf("Error:Please enter distinct characters\n");      //error message
		}
	    }
	    else
	    {
		printf("Error:N value must be greater than C\n");	//error message
	    }
	}
	else
	{
	    printf("Error:C value should be in between 1 and 10\n");	//error message
	}
	printf("Do you want to continue (Y/y):");
	getchar();
	scanf("%c", &option);
    }while(option == 'Y' || option == 'y'); 	//while loop for contnue prompt
    return 0;
}
