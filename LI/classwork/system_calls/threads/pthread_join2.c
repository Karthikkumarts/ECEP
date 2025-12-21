#include<stdio.h>
#include<pthread.h>

typedef struct 
{
    int num1,num2;
    int result;
}sumdata_t;


void *print_x(void *data)
{
    sumdata_t *sum = data;
    sum->result = sum->num1+sum->num2;

    return NULL;
}

int main()
{
    sumdata_t data ;
    pthread_t tid1;

    data.num1=10;
    data.num2=5;

    pthread_create(&tid1,NULL,print_x,&data);

    pthread_join(tid1,NULL);
    printf("%d\n",data.result);
    return 0;
}

