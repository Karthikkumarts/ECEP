#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

int counter;
void *thread_func(void *arg)
{
    while(1)
    {
	counter = 0;
	counter += 5;
	counter += 10;
	printf("%d\n",counter);
    }
    return NULL;
}

int main()
{
    pthread_t thread1,thread2;
    pthread_create(&thread1,NULL,thread_func,NULL);
    pthread_create(&thread2,NULL,thread_func,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    return 0;
}
