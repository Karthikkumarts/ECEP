#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/sem.h>
#include<sys/ipc.h>
#include<sys/wait.h>

int main()
{
    pid_t pid;
    int semid;
    struct sembuf op;
    key_t key = 'A';
    semid = semget(key,1,IPC_CREAT|0666);
    semctl(semid,1,SETVAL,1);

    pid = fork(); 

    switch(pid)
    {
    case -1:
	printf("fork creation failed\n");
	break;
    case 0:
	printf("--------------child process------------\n");
	op.sem_num = 0;
	op.sem_op = -1;
	op.sem_flg = 0;
        semop(semid,&op,1);

	printf("child is in critical section\n");
	sleep(10);
	printf("child is coming out of  critical section\n");

	op.sem_num = 0;
	op.sem_op = 1;
	op.sem_flg = 0;
        semop(semid,&op,1);

	break;
    default:
	printf("--------------parent process------------\n");
//	wait(NULL);
	op.sem_num = 0;
	op.sem_op = -1;
	op.sem_flg = 0;
        semop(semid,&op,1);

	printf("parent is in critical section\n");
	sleep(10);
	printf("parent is coming out of  critical section\n");

	op.sem_num = 0;
	op.sem_op = 1;
	op.sem_flg = 0;
        semop(semid,&op,1);
	break;
    }
}
