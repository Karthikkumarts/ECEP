#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<string.h>

void mysig_handler(int signum ,siginfo_t *siginfo , void * data )
{
	printf("signal number : %d\n",signum);
	printf("more details----------->\n");
	printf("signal addr info : %p\n",siginfo->si_addr);
	signal(SIGSEGV,SIG_DFL);

}

int main()
{
	struct sigaction newact;
	int *ptr = NULL;
	memset(&newact,0,sizeof(newact));

	newact.sa_sigaction = mysig_handler;
	newact.sa_flags = SA_SIGINFO;

	sigaction(SIGSEGV,&newact,NULL);

	*ptr = 10; //as accessing the NULL pointer segmentation call will be called
}
