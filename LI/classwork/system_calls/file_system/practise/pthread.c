#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *print_x(void * data )
{
    int res = pthread_setcancelstate(PTHREAD_CANCEL_ENABLE,NULL);
    pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS,NULL);
    if(res != 0)
    {
	printf("failed to create the state\n");
	return 1;
    }
    for(int i = 0 ; i < 10 ; i++)
    {
	printf("%d.exeuting function\n",i);
	sleep(1);
    }
}
int main()
{
    pthread_t tid1;

    pthread_create(&tid1,NULL,print_x,NULL);
    sleep(4);
    pthread_cancel(tid1);
    pthread_join(tid1,NULL);
}
