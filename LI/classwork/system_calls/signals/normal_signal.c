#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("process id : %d\n",getpid());
	while(1);
}

//To kill the process 
//Use command kill PID
//OR kill SIGINT PID	
