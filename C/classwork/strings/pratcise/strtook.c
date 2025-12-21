#include<stdio.h>
#include<string.h>
int main()
{
    char arr[250]="karthik,srujan,geetha,satheesha";
    char *del = ",";
    char *tok;
    tok  = strtok(arr,del);
    printf("%s\n",tok);
    while(tok != NULL)
    {
	printf("%s\n",tok);
	tok = strtok(NULL,del);
    }

}
