#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
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
	   char * argv[] ={"ls","-l",NULL};
	   if(execvp("p",argv) == -1)
	   	printf("error child died\n");
	   break;
       default:
	   wait(NULL);
	   printf("the parent process my pid : %d\n",getpid());
	   printf("return value : %d\n",pid);
	   printf("parent died");
	   break;
   }

    
}
