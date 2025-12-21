#include<stdio.h>
int main()
{
    char ch=1;
    while(ch)
    {
	printf(" looped %d times\n",ch);
	ch++; //can use only var++ 
    }
    printf("var----> %d\n",ch);
    return 0;
}

