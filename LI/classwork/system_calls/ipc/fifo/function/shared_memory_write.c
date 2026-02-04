#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<sys/ipc.h>

#define SMSIZE 100

int main()
{
  int shmid,num;
  int *shm;
  char *buff;
  char ch[6];
  key_t key = 'A';

  shmid = shmget(key,SMSIZE,IPC_CREAT|0664);

      if(shmid < 0)
      {
	  fprintf(stderr,"shmget failed");
	  return 1;
      }

  printf("shared memory id : %d\n",shmid);
  shm = shmat(shmid,NULL,0);
  printf("enter the number: ");
  scanf("%d",&num);

  *shm = num;

  shmdt(shm);

}

