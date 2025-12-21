#include<stdio.h>
#include<time.h>
int main(int argc , char *argv[])
{
    time_t ret;
    ret = time(NULL);
    ret = (ret/(24*60*60)); 
    printf("%ld\n",ret);

}
