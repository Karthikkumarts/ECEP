#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
    pid_t pid;

   pid = fork();

   switch(pid)
   {
       case -1:
	   printf("fork() system call failure\n");
	   break;
       case 0:
	   printf("the child process MY PID  : %d\n",getpid());
	   printf("the child process MY PPID : %d\n",getppid());
	   break;
       default:
	   printf("the parent process my pid : %d\n",getpid());
	   printf("return value : %d\n",pid);
	   break;
   }

    
}
