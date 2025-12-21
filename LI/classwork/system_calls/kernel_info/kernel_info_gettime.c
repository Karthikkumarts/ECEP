#include<stdio.h>
#include<sys/time.h>
int main()
{
    int ret_val;
    struct timeval my_time;
    //int gettomeofday(struct timeval *tv,struct timezone *tz);
    ret_val = gettimeofday(&my_time,NULL);
    if(ret_val == -1)
    {
	fprintf(stderr,"error\n");
	return 1;
    }
    printf("epoch time in seconds : %ld\n",my_time.tv_sec);
    printf("epoch time in micro seconds : %ld\n",my_time.tv_usec);
}

