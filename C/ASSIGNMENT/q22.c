/* Documentation
Name        :karthik kumar ts
Date        : 12/12/2021
Description : To write a program to count number of characters, words and lines, entered through stdin buffer
Sample execution: Hello world
Dennis Ritchie
Linux
Character count : 33
Line count : 3
Word count : 5
 */
#include<stdio.h>
int *read( int *c,int *l,int *w);

int *read( int *c,int *l,int *w)    // function for reading the inputs
{
    char ch;
    *c = 0, *w = 0, *l = 0;
    int word = 0;
    while ((ch = getchar()) != EOF)     // read inputs up to ctrl+D
    {
	*c=*c+1;    // counting charecters
	if(ch == ' ' || ch == '\t' || ch == '\0' || ch == '\n') // checking spaces
	{
	    if (word)     // checking first word
	    {
		word = 0;
		*w=*w+1;
	    }
	    if(ch = '\0' || ch == '\n')     // checking the lines
		*l=*l+1;
	}
	else
	{
	    word = 1;
	}
    }
    *l = *l + 1;
    *w = *w + 1;
}

int main()
{
    char choice;
    do
    {
	int ch,line,word;    // declaring variables
	read ( &ch,&line,&word );    // calling the function read
	printf("\ncharactor count - %d\nword count - %d\nline count - %d\n",ch,word,line);
	printf("\nDo you want to continue(y/n) : ");
	//getchar();
	scanf("\n%c",&choice);
	// __fpurge(stdin);
    }while( choice == 'y' || choice == 'Y' );     // to continue
    return 0;    
}
