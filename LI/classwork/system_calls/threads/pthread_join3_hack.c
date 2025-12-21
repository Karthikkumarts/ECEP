#include<stdio.h>
#include<pthread.h>

typedef struct 
{
    int num1,num2;
    int result;
}sumdata_t;


void *print_x(void *data)
{
    int result;
    sumdata_t *sum = data;
    result = sum->num1+sum->num2;

    return (void *)(long)result;
}

int main()
{
    sumdata_t data ;
    pthread_t tid1;

    data.num1=10;
    data.num2=5;

    pthread_create(&tid1,NULL,print_x,&data);
    int sum;
    pthread_join(tid1,(void **)&sum);
    printf("%d\n",sum);
    return 0;
}

