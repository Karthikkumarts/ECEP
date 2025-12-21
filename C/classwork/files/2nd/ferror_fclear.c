#include<stdio.h>
int main()
{
  FILE *fp;
  char ch;
  fp= fopen("file.txt","w");
  ch = getc(fp);
  if(ferror(fp))
      fprintf(stderr,"error while reading from fp:file.txt\n");
  clearerr(fp);
  if(ferror(fp))
      fprintf(stderr,"error while reading from fp:file.txt\n");
fclose(fp);
}
