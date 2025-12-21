#include<stdio.h>
#include<signal.h>
void signal_handler(int num);
int main()
{
    printf("enter ctrl+c\n");
    //regitering the signal
    //signal(SIGINT,SIG_DFL); //default action
    signal(SIGINT,SIG_IGN); //signal is ignored
    while(1);
}

void signal_handler(int num)
{
    printf("num : %d\n",num);
    printf("you have pressed ctrl+c\n");
}
