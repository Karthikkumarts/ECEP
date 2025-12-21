#include<stdio.h>
#include<string.h>
 int main()
{
    char fruits[]="apple,mango,orange,bannana,grapes";
    char *del=","; //can use multiple delimiter
    char *token=strtok(fruits,del);
   /* if (token != NULL)
	printf("token = %s\n",token);
    else
	printf("not found");*/
    while(token != NULL)
    {
	printf("token = %s\n",token);
	token=strtok(NULL,del);
    }
    return 0;
}

