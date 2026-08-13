#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<sys/ipc.h>

#define SMSIZE 100

int main()
{
  int shmid,num;
  //int *shm; //this is for int 
  char *shm; // this is for char ----> To send the both we must use structure which is shown in shared_memory_write2.c
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

  char *buf = "karthik";
  //*shm = num;
  
  strcpy(shm ,buf);

  shmdt(shm);

}

