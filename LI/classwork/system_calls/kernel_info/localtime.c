#include<stdio.h>
#include<time.h>
#include<sys/time.h>

int main()
{
	time_t ret;
	ret = time(NULL);
	printf("ret : %ld \n",ret);

	struct tm * lt;
	lt = localtime(&ret);

	printf("hour :%d  min : %d sec : %d\n",
			lt->tm_hour,
			lt->tm_min,
			lt->tm_sec);
	printf("date : %d/%d/%d\n",
			lt->tm_mday,
			lt->tm_mon+1,
			lt->tm_year+1900);
}
//man 3 mt
//man 3 localtime
