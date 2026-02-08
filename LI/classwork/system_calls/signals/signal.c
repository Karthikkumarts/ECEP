#include<stdio.h>
#include<signal.h>
void signal_handler(int num);
int main()
{
    printf("enter ctrl+c\n");
    //regitering the signal
    signal(SIGINT,signal_handler);
    printf("came back form signal handler\n");
    while(1);//to stop press ctrl+z
}

void signal_handler(int num)
{
    printf("signal handler\n");
    printf("num : %d\n",num);
    printf("you have pressed ctrl+c\n");
    //signal(SIGINT,SIG_DFL);//Okay OS, from now on, handle SIGINT the normal way.”
    //if we dont want to be forever(if we press ctrl+c as while loop is there we wont exit hence we are giving default action)

    signal(SIGINT,signal_handler);// this will not terminate normally because this uses signla_handler function
    printf(" going back to main \n");
}
