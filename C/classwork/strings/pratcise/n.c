#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100]="karthik;kumar;ts;srujan;geetha;satheesha";
    char *a= ";";
    char *ret = strtok(arr,a);
    while(ret != NULL)
    {
    printf("%s\n",ret);
    ret = strtok(NULL,a);
    }
}
