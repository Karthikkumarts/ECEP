#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int num;
    fp = fopen("test.txt","a+");
    num = ftell(fp);
    printf("file offset is at %ld\n",num);
    fputc('a',fp);
    num = ftell(fp);
    printf("file offset is at %ld\n",num);
    
    fclose(fp);
}
