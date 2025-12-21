#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

typedef struct 
{
    int a,b,result;
}sum_t;

void * sum(void * data)
{
    printf("hi hello\n");
}

int main()
{
    pthread_t tid1,tid2;
    sum_t data;
    pthread_attr_t attr;
    int sum_result;
    data.a=10;
    data.b=100;

    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_DETACHED);
    pthread_create(&tid1,&attr,sum,NULL);
    sleep(15);
}
