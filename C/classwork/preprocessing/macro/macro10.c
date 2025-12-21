#include<stdio.h>
#define  warn_if(EXP)   \
do  \
{   \
	x--;                                          \
	if(EXP)                                        \
	{                                              \
	    fprintf(stderr,"warning:" #EXP "\n");      \
	}                                              \
}while(x);                                         \


int main()
{
    int x=5;
    warn_if(x==0);
    return 0;
}

