/*Description 
Name            :KARTHIK KUMAR TS
Date            :29/11/2021
Description     :WAP to implement own c-type library
Sample execution:
Enter the character: A
select any option:
1.my_alpha
2.my_alnum
3.my_ascii
4.my_alupper
Enter your choice: 1
The character A is an alpha character

Do you want to continue(y/Y): y
Enter the character: a
select any option:
1.my_alpha
2.my_alnum
3.my_ascii
4.my_alupper
Enter your choice: 2
The character a is not an alnum character

Do you want to continue(y/Y): n

*/

#include<stdio.h>
//function prototype declaration
int my_alpha(char);
int my_alnum(char);
int my_alascii(char);
int my_alupper(char);

int main()
{
    char choice;
    do
    {
	char ch,status; //initialising character data types
	int option;    //initialzing integer data type
	printf("Enter the character: ");
	scanf("\n%c",&ch); //reads for an character
	printf("select any option:\n");
	printf("1.my_alpha\n2.my_alnum\n3.my_ascii\n4.my_alupper\n");
	printf("Enter your choice: ");
	getchar();
	scanf("%d",&option);
	switch (option) //switch condition is used to do particular task according the option we have given
	{
	    case 1:
		status = my_alpha(ch); //function calling for my_alpha
		if ( status == 1 )   //if condition satisfies executes below statement
		{
		    printf("The character %c is an alpha character\n",ch);
		}
		else
		{
		    printf("The character %c is not an alpha character\n",ch);
		}
		break;
	    case 2:
		status = my_alnum(ch); //function call for my_alnum
		if ( status == 1 )
		{
		    printf("The character %c is an alnum character\n",ch);
		}
		else
		{
		    printf("The character %c is not an alnum character\n",ch);
		}
		break;
	    case 3:
		status = my_alascii(ch); //function call for my_alascii
		if ( status == 1 )
		{
		    printf("The character %c is an alascii character\n",ch);
		}
		else
		{
		    printf("The character %c is not an alascii character\n",ch);
		}
		break;
	    case 4:
		status = my_alupper(ch); //function call for my_alupper
		if ( status == 1 )
		{
		    printf("The character %c is an alupper character\n",ch);
		}
		else
		{
		    printf("The character %c is not an alupper character\n",ch);
		}
		break;
	    default:
		printf("choose above options only");
		break;
	}
	printf("\nDo you want to continue(y/Y): ");
	scanf("\n%c",&choice);
    }while ( choice == 'y' || choice == 'Y' ); //do_while condition is used to repeated task until the condition will satisfy
    return 0;
}

int my_alpha(char ch) //function definnition or called function
{
    if ((ch >= 'a' && ch <= 'z' ) || (ch >= 'A' && ch <= 'Z'))
    {
	return 1; //if condition satisfy then return 1 and goes back to the function call
    }
    else
    {
	return 0;
    }
}
//function definition fo my_alnum
int my_alnum(char ch)
{
    if ((ch >= '0' && ch <= '9' ))
    {
	return 1;
    }
    else
    {
	return 0;
    }
}
//function definition for my_alascii
int my_alascii(char ch)
{
    if ((ch >= 0 && ch <= 127 ))
    {
	return 1;
    }
    else
    {
	return 0;
    }
}
//function definition for my_alupper
int my_alupper(char ch)
{
    if ((ch >= 'A' && ch <= 'Z'))
    {
	return 1;
    }
    else
    {
	return 0;
    }
}

