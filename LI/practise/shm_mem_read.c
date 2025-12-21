#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>

int main()
{
    int shmid,num;
    int *shm;
    char key = 'A';
    
    shmid = shmget(key,100,0644);
    printf("shmid : %d\n",shmid);
    shm = shmat(shmid,NULL,0);
    printf("the number : %d",*shm);
    shmdt(shm);
}
