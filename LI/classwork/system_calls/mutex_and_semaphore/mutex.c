#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_mutex_t lock;
int counter;

void *thread_func(void *arg)
{
    while(1)
    {
//	pthread_mutex_lock(&lock);
	counter = 0;
	counter += 5;
	counter += 10;
	printf("%d\n",counter);
//	pthread_mutex_unlock(&lock);
    }
    return NULL;
}

int main()
{
    pthread_t thread1,thread2;
    if(pthread_mutex_init(&lock,NULL) != 0)
    {
	printf("failed to create a mutex lock");
	return 1;
    }

    pthread_create(&thread1,NULL,thread_func,NULL);
    pthread_create(&thread2,NULL,thread_func,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);	
    pthread_mutex_lock(&lock);

    pthread_mutex_destroy(&lock);
    return 0;
}
