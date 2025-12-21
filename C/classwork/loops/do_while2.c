#include<stdio.h>
int main()
{
    int num;
    char ch;
    do 
    {
	printf("enter the num\n");
	scanf("%d",&num);
	if (num%2)
	    printf("num is odd\n");
	else   
	    printf("num is even\n");
	printf("num is %d\n",num);
	printf("do you want to continue? press y:");
	getchar();
	scanf("%c",&ch);
    }
    while (ch == 'y' || ch == 'Y'); 
    return 0;
}
