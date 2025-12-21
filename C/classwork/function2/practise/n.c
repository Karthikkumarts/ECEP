#include<stdio.h>
int main(int argc,char *argv,char *env[])
{
    char *user;
    user=(char *)getenv("USER");
    puts(user);
}
