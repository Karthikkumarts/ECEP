#include<stdio.h>
int main()
{
    char ch='y';
    printf("enter a string:");

    while( ch != 'n' )
    {
	scanf("%c",&ch);
	printf("%c",ch);
    }
    return 0;
}
