#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv,char *env[])
{
    int i;
    for (i = 0;env[i] != NULL;i++) //env will have as last element
    {
	if (strstr(env[i],"ARR") != NULL)
	{
	    printf("found %s\n",env[i]);
	}
    }
    return 0;
}

