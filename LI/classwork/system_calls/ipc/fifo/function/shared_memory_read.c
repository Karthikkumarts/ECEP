#include<stdio.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<sys/ipc.h>

#define SMSIZE 100

int main()
{
    int shmid,num;
    int *shm;
    char *buff;
    key_t key = 'A';

    shmid = shmget(key,SMSIZE,0664);

    if(shmid < 0)
    {
	fprintf(stderr,"shmget failed");
	return 1;
    }

    printf("shared memory id : %d\n",shmid);
    shm = shmat(shmid,NULL,0);
    if(shm < 0)
    {
	printf("shmat");
	return 2;
    }
    else
    {
	printf("shared memory value : %d\n",*shm);
    }
    /*buff=shmat(shmid,NULL,0);
    if(buff < 0)
    {
	printf("shmat");
	return 2;
    }
    else
    {
	printf("shared memory value : %s\n",(char *)buff);
    }*/

    //printf("%ls\n",shm);

    printf("%d\n",*shm);
    shmdt(shm);
    shmctl(shmid, IPC_RMID, NULL);

}

