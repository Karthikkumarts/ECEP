/*Documentation
Name             : KARTHIK KUMAR TS
Date             : 13/12/2021
Description      : WAP to perform strrev function using recursive and non recursive modes
Sample execution : 
                  Test case 1:
		  ./str_rev
		  Enter a string    : Hello World
		  Reverse string is : dlroW olleH
 */
#include<stdio.h>
char my_strrev(char *str1, int count);
char rmy_strrev(char *str1, int count);
int main()
{
    char Choice;
    do
    {
	int i=0,count=0,opt;
	char str1[100];
	printf("Enter a string : "); //to read string
	scanf("%[^\n]",str1);
	for(i=0;str1[i] != '\0';i++)
	{
	    count++;
	}
	printf("1.iterative method\n2.Recursive\nEnter your choice : ");
	scanf("%d",&opt);
	switch (opt)
	{
	    case 1:
		my_strrev(str1,count);//iterative method
		printf("\n");
		break;
	    case 2:
		rmy_strrev(str1,count);//Recursive mode
		printf("\n");
		break;
	    default :
		printf("Enter valid option\n");
		break;
	}
	printf("Do you want to continue(Y/y) : ");
	getchar();
	Choice = getchar();
	getchar();
    }while(Choice == 'Y' || Choice == 'y'); 
    return 0;
}
char my_strrev(char *str1,int count) //iterative method
{
    int i;
    for(i = count;i >= 0; i--)
    {
	printf("%c",str1[i]);
    }
    return 0;
}
char rmy_strrev(char *str1,int count) // Recursive mode
{
    if( count-- >= 0)
    {
	printf("%c",str1[count]);
	rmy_strrev(str1,count);
    }
    return 0;
}
