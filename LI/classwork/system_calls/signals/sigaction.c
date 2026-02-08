#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<string.h>
static int sigcnt;
void mysig_handler(int num)
{
	printf("git signal : %d\n",num);
	sigcnt++;
}

int main()
{
	struct sigaction newact;
	memset(&newact,0,sizeof(newact));

	newact.sa_handler = mysig_handler;

	sigaction(SIGINT,&newact,NULL);

	while(1)
	{
		printf("sig count : %d\n",sigcnt);
	}
}
