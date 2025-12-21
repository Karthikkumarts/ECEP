#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* argc (argument count) - contains number of arguments including prototype
   argc(argumnet vector) - contains actual arguments
   argv[0] is the program name always
   environmental variables can be accessed using env*/
int main(int argc,char *argv,char *env[])
{
    int i;
    char *user_name;
   for(i=0;i < env[i] != NULL;i++)
    {
	printf("%d : %s\n",i,env[i]);
    }
    for (i = 0;env[i] != NULL;i++) //env will have as last element
    {
	if (strstr(env[i],"HOME") != NULL) //search for variable containing HOME
	{
	    printf("found %s\n",env[i]);
	}
    }

    user_name=getenv("USER"); //get value of $user
      puts(user_name);
    /*alternate (common method) to access specific env variable 
      here we are getting $user env variable
      user = getenv("user");
      puts(user);
     */
}
