#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void signal_handler(int num);
int counter=0;
int main()
{
    printf("enter ctrl+c\n");
    signal(SIGINT,signal_handler);
    //cpu will be consumed 100% by this program if we use -------------> while(1);
    //so use 
    //while(1);
    pause(); //it Put this process to sleep until a signal is delivered and its handler finishes executing
    //It does not wait for: 1)Another signal 2)Default action 3)Program termination
    printf("bye\n");
}

void signal_handler(int num)
{
    printf("signal recieved for %d times\n",counter++);
    printf("you have pressed ctrl+c\n");
    if(counter == 3)
    {
	signal(SIGINT,SIG_DFL);
    }
}
