#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]="karthik,kumar,srujan,satheesha,geetha";
    char *del=",";
    char *tok = (strtok(ch,del));
    while(tok != NULL)
    {
      printf("%s\n",tok);
      tok = strtok(NULL,del);
    }

}
