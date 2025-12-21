#include<stdio.h>
struct data
{
    int num1;
    char oper;
    int num2;
    char str[10];
    float num3;
};

int main()
{
    struct data d1={2 ,'+',1,"is",1.1};
    struct data d2;
    FILE *fp;
    fp = fopen("meg.txt","w+");
    fwrite(&d1,sizeof(d1),1,fp);
    rewind(fp);
    fread(&d2,sizeof(d2),1,fp);

    printf("%d %c %d %s %f",d2.num1,d2.oper,d2.num2,d2.str,d2.num3);
    fclose(fp);
    return 0;
}
