#include<stdio.h>
int main()
{
    char  option;
    printf("enter the value\n");
    scanf("%c",&option);
    printf("%d\n",option);
    switch (option)
    {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	    printf("the given letter is vowel\n");
	    break;
	default:
	    printf("try again");
    }
    return 0;
}
