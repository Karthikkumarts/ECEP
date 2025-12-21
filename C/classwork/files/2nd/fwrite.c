#include<stdio.h>
int main()
{
    FILE *fp;
    if((fp = fopen("kar.txt","w+")) == NULL)
    {
	fprintf(stderr,"cant open input file");
    }
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    fwrite(&num1,sizeof(num1),1,fp);
    fwrite(&num2,sizeof(num2),1,fp);
    rewind(fp);
    fread(&num1,sizeof(num1),1,fp);
    fread(&num2,sizeof(num2),1,fp);
    printf("%d %d",num1,num2);
return 0;    
}
