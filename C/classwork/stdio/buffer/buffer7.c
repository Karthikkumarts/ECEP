#include<stdio.h>
#include<stdio_ext.h>
int main()
{
    char ch='y';
    printf("enter  string:");

    while( ch != 'n')
    {
	scanf("%c",&ch);
//	__fpurge(stdin); // it is generally not used
	while(getchar() != '\n');
	printf("%c",ch);
    }
    return 0;
}
