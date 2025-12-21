#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *PRINT()
{
    printf("inside thread function\n");
  //  pthread_setcancelstate(PTHREAD_CANCEL_DISABLE,NULL);
    pthread_setcancelstate(PTHREAD_CANCEL_ENABLE,NULL);
    //pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS,NULL);
    pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED,NULL);
    for(int i = 1 ; i <= 10 ; i++)
    {
	printf("thread executing : %d\n",i);
//	sleep(1);
    }

}
int main()
{
    pthread_t tid;

    pthread_create(&tid,NULL,&PRINT,NULL);

    int res;
    sleep(3);
    printf("calling cancel request\n");
   res  = pthread_cancel(tid);
   if(res != 0 )
   {
       printf("thread cancellation failed\n");
   }

   pthread_join(tid,NULL);

}
