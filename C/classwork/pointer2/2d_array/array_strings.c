#include<stdio.h>
int main()
{
    char *str[3]={"how","are","you"}; //constant strings
    printf("str[0] = %c\n",str[0][0]);
    printf("str[1] = %s\n",str[1]);
    printf("str[2] = %s\n",str[2]);
    printf("%c\n",str[0][1]);


    //using loops to print array elements
    for(int i=0;i<3;i++)
    {
	for(int j=0;j<3;j++)
	{
	    //printf("str[0] = %c",*(str[i]+j));
	    printf("%c",str[i][j]);
	    
	}
	printf("\n");
    }
    
}
