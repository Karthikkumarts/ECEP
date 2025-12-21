#include<stdio.h>
int main()
{
    FILE *fp;
    int num=12345;
    fp=fopen("file.txt","w+");
    fprintf(fp,"%d",num);
//    fwrite(&num,sizeof(int),1,fp);
}


