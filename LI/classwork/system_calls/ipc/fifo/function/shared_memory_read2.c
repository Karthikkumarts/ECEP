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
	int shmid = shmget(key,FILESIZE,0644);
	printf("shared memory id : %d\n",shmid);
	if(shmid == -1)
	{
		printf("failed to create shared memory\n");
		return 1;
	}
	shm = (struct shmdata *)shmat(shmid,NULL,0);

	printf("num : %d\n",shm->num);
	printf("num : %s\n",shm->name);
	shmdt(shm);
	


}
