#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
int counter;
pthread_mutex_t lock;
void *thread_fun(void *data)
{
    while(1)
    {
//	pthread_mutex_lock(&lock);
	counter = 0;
	counter+=5;
	counter+=10;
	printf("counter : %d\n",counter);
//	pthread_mutex_unlock(&lock);
    }
}
int main()
{
    pthread_t tid1,tid2;

    if(pthread_mutex_init(&lock,NULL) != 0)
    {
	printf("mutex failed\n");
	return 1;
    }

    pthread_create(&tid1,NULL,thread_fun,NULL);
    pthread_create(&tid2,NULL,thread_fun,NULL);
    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
	pthread_mutex_destroy(&lock);
}
