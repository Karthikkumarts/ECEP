#include<stdio.h>
#include<pthread.h>
void *print_x(void *data)
{
//    while(1)
    {
	fputc('X',stderr);
    }
}

void *print_y(void *data)
{
  //  while(1)
    {
	fputc('Y',stderr);
    }
}

int main()
{
    pthread_t tid1,tid2;

    pthread_create(&tid1,NULL,print_x,NULL);
    pthread_create(&tid2,NULL,print_y,NULL);

    pthread_join(tid1,NULL);
    printf("hi\n");
    pthread_join(tid2,NULL);
    //while(1);
}

