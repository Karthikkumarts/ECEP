#include<stdio.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<string.h>
#define FILESIZE 100
struct shmdata
{
	int num;
	char name[10];
};
int main()
{
	struct shmdata *shm;
	key_t key = 'A';
	int shmid = shmget(key,FILESIZE,IPC_CREAT | 0644);
	if(shmid == -1)
	{
		printf("failed to create shared memory\n");
		return 1;
	}
	shm = (struct shmdata * )shmat(shmid,NULL,0);

	printf("enter the num : ");
	scanf("%d",&shm->num);
	printf("enter the name : ");
	scanf("%s",shm->name);

	shmdt(shm);
	


}
