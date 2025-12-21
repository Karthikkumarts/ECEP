#include<stdio.h>
#include<unistd.h>
//buffer will be flushed after normal program termination
int main()
{
    for (int i=0;i<5;i++)
    {
	printf("hello\n");
//	fflush(stdout); //flushing mechanism
	sleep(1);
    }
    return 0;
}
