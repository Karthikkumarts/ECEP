#include<stdio.h>
#include<pthread.h>

void *print_x()
{
//    while(1)
    fputc('x',stderr);
}

void *print_o()
{
  //  while(1)
    fputc('O',stderr);
}

int main()
{
    pthread_t tid1,tid2;
    pthread_create(&tid1,NULL,print_x,NULL);
    pthread_create(&tid2,NULL,print_o,NULL);
    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
//    while(1);
}
