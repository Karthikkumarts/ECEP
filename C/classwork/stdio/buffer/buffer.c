#include<stdio.h>
#include<unistd.h>
//when printf encounters \n character buffer will be get flushed
int main()
{
    while(1)
    {
	printf("hello\n");
	fflush(stdout);
	sleep(1);
    }
    return 0;
}
