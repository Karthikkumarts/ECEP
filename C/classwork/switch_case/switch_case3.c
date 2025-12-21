#include<stdio.h>
int main()
{
    int  option;
    printf("enter the value\n");
    scanf("%d",&option);
    switch (option)
    {
	   	case 'a' ... 'z':
	    printf("you entered 10\n");
	    break;
	case 'A' ... 'Z':
	    printf("you entered 20\n");
	    break;
	default:
	    printf("try again");
    }
    return 0;
}
