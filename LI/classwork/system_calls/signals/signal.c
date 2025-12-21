#include<stdio.h>
#include<signal.h>
void signal_handler(int num);
int main()
{
    printf("enter ctrl+c\n");
    //regitering the signal
    signal(SIGINT,signal_handler);
    while(1);//to stop press ctrl+z
}

void signal_handler(int num)
{
    printf("num : %d\n",num);
    printf("you have pressed ctrl+c\n");
    signal(SIGINT,SIG_DFL);//if we dont want to be forever(if we press ctrl+c as while loop is there we wont exit hence we are giving default action)

}
