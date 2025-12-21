#include<stdio.h>
#include<time.h>
int main()
{
    time_t ret_val;
    ret_val = time(NULL);
    printf("%ld\n",ret_val);
}

