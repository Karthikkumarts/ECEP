#include<stdio.h>
#include<unistd.h>
int main()
{
    for(int i = 0 ; i < 100; i++)
    {
	printf("****%\rd***\b",i);
	sleep(1);
    }
}
