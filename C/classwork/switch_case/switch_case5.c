#include<stdio.h>
int main()
{
    int option;
    printf("enter the value\n");
    scanf("%d",&option);
    switch (option)
    {
	   	case 2+'a':
	    printf("you entered 10\n");
	    break;
	case 20:
	    printf("you entered 20\n");
	    break;
	default:
	    printf("try again");
    }
    return 0;
}
