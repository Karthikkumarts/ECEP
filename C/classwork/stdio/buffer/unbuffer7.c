#include<stdio.h>
#include<unistd.h>
int main()
{
    while(1)
    {
	fprintf(stdout,"hello\n");
	fprintf(stderr,"world\n");
	sleep(1);
    }
    return 0;
}

