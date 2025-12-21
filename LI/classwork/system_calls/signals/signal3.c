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
    pause();
    printf("bye\n");
}

void signal_handler(int num)
{
    printf("signal recieved for %d times\n",counter++);
    printf("you have pressed ctrl+c\n");
    if(counter == 0)
    {
	signal(SIGINT,SIG_DFL);
    }

}
