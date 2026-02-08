#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>
#define MAX_BUFFER 25

sem_t lock,empty,full;
int buff[MAX_BUFFER],rear,front;
void *produce(void *arg);
void *consume(void *arg);
int main()
{
    pthread_t tid1,tid2;

    sem_init(&lock,0,1);
    sem_init(&full,0,0);
    sem_init(&empty,0,MAX_BUFFER);

    pthread_create(&tid1,NULL,produce,NULL);
    pthread_create(&tid2,NULL,consume,NULL);

    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
}

void *produce(void *arf)
{
    for(int i = 1 ; i <= 10 ; i++)
    {
	sem_wait(&empty);
	sem_wait(&lock);
	printf("produced item is : %d\n",i);
	buff[(++rear)%MAX_BUFFER]=i;
	sleep(1);
	sem_post(&lock);
	sem_post(&full);
    }
}

void *consume(void *arg)
{
    int item;
    for(int i = 1 ; i <= 10 ; i++)
    {
    sem_wait(&full);
    sem_wait(&lock);
    item=buff[(++front)%MAX_BUFFER];
    printf("consume item : %d\n",item);
    sleep(1);
    sem_post(&lock);
    sem_post(&empty);
    }
}
