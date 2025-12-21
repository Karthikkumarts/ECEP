#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char **argv,char **env)
{
  for(int i = 0 ; env[i] != NULL ; i++)
      printf("%s\n",env[i]);

char *path;
path = getenv("PATH");
puts(path);
}
