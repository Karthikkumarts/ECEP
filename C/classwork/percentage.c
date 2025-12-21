#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if (num > 0 && num < 100)
	if (num >= 90 && num < 100)
	    printf("grade is A+");
	else if (num >= 75 && num < 90)
	    printf("grade is A");
	else if ( num >= 60 && num < 75)
	    printf("grade is B");
	else if (num >= 50 && num < 60 )
	    printf("grade is C");
	else
	    printf("grade is fail");
}

