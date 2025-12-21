#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#include<unistd.h>

sem_t empty,full,lock;
#define buffer 25
int buff[buffer],rear,front;

void *producer()
{
    for(int i = 1 ; i <= 10 ; i++)
    {
	sem_wait(&empty);
	sem_wait(&lock);
	printf("producer itme : %d\n",i);
	buff[(++rear % buffer)]=i;
	sleep(1);
	sem_post(&lock);
	sem_post(&full);
    }
    return NULL;
}
void *consumer()
{
    int item;
    for(int i = 1 ; i <= 10 ; i++)
    {
	sem_wait(&full);
	sem_wait(&lock);
	item = buff[++front % buffer];
	printf("consumer item : %d\n",item);
	sleep(1);
	sem_post(&lock);
	sem_post(&empty);
    }
return NULL;
}


int main()
{
    pthread_t tid1,tid2;

    sem_init(&empty,0,buffer);
    sem_init(&full,0,0);
    sem_init(&lock,0,1);

    pthread_create(&tid2,NULL,producer,NULL);
    pthread_create(&tid2,NULL,consumer,NULL);

    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
}
