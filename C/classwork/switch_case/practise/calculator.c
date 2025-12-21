#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("enter the expression : ");
    scanf("%d %c %d",&a,&c,&b);
    switch(c)
    {
	case '+':
	    printf("%d\n",a+b);
	    break;
	case '-':
	    printf("%d\n",a-b);
	    break;
	case '/':
	    printf("%d\n",a/b);
	    break;
	case '*':
	    printf("%d\n",a*b);
	    break;

    }
}
