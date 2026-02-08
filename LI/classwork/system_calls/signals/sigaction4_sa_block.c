#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<string.h>

void mysig_handler(int signum ,siginfo_t *siginfo , void * data )
{
	printf("signal number : %d\n",signum);
	for(int i  = 20 ; i > 0 ; i--)
	{
		printf("inside handler : %d\n",i);
		sleep(1);
	}
}

int main()
{
	struct sigaction newact;
	memset(&newact,0,sizeof(newact));

	sigset_t mask;
	sigemptyset(&mask);
	sigfillset(&mask); //this will block all the signals
	//sigaddset(&mask,SIGTERM); //this will block only termination signal

	newact.sa_sigaction = mysig_handler;
	newact.sa_flags = SA_SIGINFO;
	newact.sa_mask = mask;

	sigaction(SIGINT,&newact,NULL);
	printf("process id : %d\n",getpid());
	printf("enter ctlr + c\n");
	while(1);

}
