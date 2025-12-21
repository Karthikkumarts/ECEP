#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *thread_func(void *data)
{
    int res,i;

   // res = pthread_setcancelstate(PTHREAD_CANCEL_DISABLE,NULL);
 //     res = pthread_setcancelstate(PTHREAD_CANCEL_ENABLE,NULL);
  //    pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS,NULL);
     //pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED,NULL);
   // if(res != 0)
   // {
//	printf("thread cancellation state failed\n");
//	return 1;
  //  }

    printf("thread function still running\n");
    for(i = 1 ; i <= 10 ; i++)
    {
	printf("%d thread function running\n",i);
	sleep(1);
    }
return NULL;
}


int main()
{
    pthread_t tid,tid2;
    int res;
    void *thread_result;

    res = pthread_create(&tid,NULL,&thread_func,NULL);

    if(res != 0)
    {
	printf("thread creation failed");
	return 1;
    }

    sleep(5);
    printf("creating cancelling\n");
    res = pthread_cancel(tid);
    if(res != 0)
    {
	printf("thread creation failed");
	return 1;
    }

    pthread_join(tid,NULL);
    return 0;

}

