#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *thread_func(void * data)
{
    int i;
    for( i = 1 ; i <= 10 ; i++)
    {
	printf("%d.inside thread function\n",i);
	sleep(1);
    }

    return NULL;
}

/*void *print_x(void * data)
{
    for(int i = 1 ; i <= 10; i++)
    {
	printf("%d,x",i);
    }
}*/

int main()
{
  pthread_t tid,tid2;

  pthread_attr_t attr;

  pthread_attr_init(&attr);

  pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_DETACHED);

 // pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_JOINABLE);

  pthread_create(&tid,&attr,thread_func,NULL);
 // pthread_create(&tid2,NULL,print_x,NULL);

//  sleep(30); 
//  pthread_join(tid,NULL);
 // pthread_join(tid2,NULL);
  printf("back to main function\n");

  pthread_attr_destroy(&attr);

}
