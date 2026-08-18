#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
int count=1;
#define MA 10
pthread_mutex_t lock;

void * print_odd(void *)
{
        while(count <= MA)
        {
                pthread_mutex_lock(&lock);
                if((count <= MA) &&((count %2) !=0))
                {
                        printf("odd : %d\n",count);
                        count++;
                        sleep(1);
                }
                pthread_mutex_unlock(&lock);
        }
}


void * print_even(void *)
{

        while(count <= MA)
        {
                pthread_mutex_lock(&lock);
                if((count <= MA) && ((count %2) ==0))
                {
                        printf("even : %d\n",count);
                        count++;
                        sleep(1);
                }
                pthread_mutex_unlock(&lock);
        }
}
int main()
{
        pthread_t tid1,tid2;
        pthread_create(&tid1,NULL,print_odd , NULL);
        pthread_create(&tid2,NULL,print_even , NULL);
        pthread_join(tid1,NULL);
        pthread_join(tid2,NULL);

}
