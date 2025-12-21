#include<stdio.h>
#include<pthread.h>

typedef struct 
{
    int a,b,result;
}sum_t;

void * sum(void * data)
{
    int result;
    sum_t *p = data;
   p->result = p->a+p->b;
   result = p->a+p->b;
   return (void*)(long)result;
}

int main()
{
    pthread_t tid1,tid2;
    sum_t data;
    int sum_result;
    data.a=10;
    data.b=100;

    pthread_create(&tid1,NULL,sum,&data);
    pthread_join(tid1,(void **)&sum_result);
    printf("result : %d sum_result : %d\n ",data.result,sum_result);

}
