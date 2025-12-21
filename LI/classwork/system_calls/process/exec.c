#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("pid of the exec process : %d\n",getpid());
    printf("pid of the exec parent process : %d\n",getppid());

    /*execl()*/

    //execl("/bin/ls","ls","-l",(char *)NULL); // ABSOLUTE PATH
    //execl("/bin/ls","ls",(char *)NULL);

    /*execlp()*/

    //execlp("ls","ls",(char * )NULL); //Relative path


    /*execv()*/
    //char *const argv[]={"ls","-l",(char *)NULL};
    //execv("/bin/ls",argv);
   //execvp("/bin/ls",argv);

    /*execvp*/

  char *const argv[]={"./exec2",(char*)NULL};
    execvp("./exec2",argv);

    printf("world\n");
}

