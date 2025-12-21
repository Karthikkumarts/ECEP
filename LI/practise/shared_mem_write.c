#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>

int main()
{
    int shmid,num;
    int *shm;
    char key = 'A';
    
    shmid = shmget(key,100,IPC_CREAT|0664);
    printf("shmid : %d\n",shmid);
    shm = shmat(shmid,NULL,0);
    printf("enter the number :");
    scanf("%d",&num);
    *shm=num;
    shmdt(shm);
}
