#include<stdio.h>
#include<time.h>
int main()
{
    time_t ret_val,my_time;
   // ret_val = time(NULL);
    ret_val = time(&my_time);
    if(ret_val == -1)
    {
	fprintf(stderr,"error\n");
	return 1;
    }
    printf("%ld\n",ret_val);
    printf("%ld\n",my_time);
}

