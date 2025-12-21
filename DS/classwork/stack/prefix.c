#include<stdio.h>
#include<string.h>
int stack[50];
int top=-1;
void str_rev( char *e,int len)
{
    int mid=len/2;
    for(int i=0;i<=mid;i++)
    {
	char temp=e[len-i-1];
	e[len-i-1]=e[i];
	e[i]=temp;
    }

}
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    return stack[top--];
}

int priority(char x)
{
    if(x == '(')
    {
	return 0;
    }
    if(x == '+' || x == '-')
    {
	return 1;
    }
    if(x == '*' || x == '/' )
    {
	return 2;
    }
    if(x == '^')
    {
	return 3;
    }
}
int main()
{
    char exp[50];
    char *e,x;
    printf("enter the expression:");
    scanf("%s",exp);
    int len=strlen(exp);
    e=exp;
    str_rev(e,len);
    char str[50];
    int j=0;
    while ( *e != '\0')
    {
	if (*e >= '0'&& *e < '9')
	{
	   str[j++]=*e;
	      // printf("%c",*e);

	}
	else if(*e == '(')
	{
	    push(*e);
	}
	else if(*e == ')')
	{
	    while(( x = pop()) != '(')
	    {
		str[j++] = x;
	//	    printf("%c",x);
	    }
	}
	else
	{
	    while((priority(stack[top])) > (priority(*e)))
	    str[j++] =pop();
	     //  	printf("%c",pop());
	    push(*e);
	}
	e++;
    }
    while(top != -1)
    {
	    str[j++] =pop();
//	printf("%c",pop());
    }
   str_rev(str,len);
   printf("%s",str);
   printf("\n");
}
