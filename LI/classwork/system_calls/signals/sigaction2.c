#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<string.h>

void mysig_handler(int signum ,siginfo_t *siginfo , void * data )
{
	printf("signal number : %d\n",signum);
	printf("more details----------->\n");
	printf("signal number info : %d\n",siginfo->si_signo);
	printf("signal errno  info : %d\n",siginfo->si_errno);
	printf("signal code  info : %d\n",siginfo->si_code);
	printf("signal addr info : %p\n",siginfo->si_addr);
	printf("signal process ID info : %d\n",siginfo->si_pid);
	signal(SIGINT,SIG_DFL);

}

int main()
{
	struct sigaction newact;
	memset(&newact,0,sizeof(newact));

	newact.sa_sigaction = mysig_handler;
	newact.sa_flags = SA_SIGINFO;

	sigaction(SIGINT,&newact,NULL);
	printf("enter ctrl +c \n");

	while(1);
}
