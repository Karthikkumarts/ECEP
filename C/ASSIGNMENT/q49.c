/*
 * Name : KARTHIK KUMAR TS
 * Date : 15/12/2021
 * Description : WAP to print all possible combination of string
 * Input : abc
 * Output : abc
 acb
 bca
 bac
 cab
 cba
 */
#include<stdio.h> // file used for input and output operation
#include<string.h> // file used for string
#include<stdio_ext.h> // file used for __fpurge
size_t my_strlen(const char*); //function protype
void combine(char *str,int a,int n); //function prototype
void swap(char *c1,char *c2); // function prototype
int uniq_str(char *); // function protype
int main()
{
    char choice;
    do
    {
	char str[100];
	__fpurge(stdin);
	int n;
	int res;
	printf("Enter the string: ");
	scanf("%100[^\n]",str);                     
	n=my_strlen(str); // function call for strlen
	res=uniq_str(str); // function call for distinct character
	if(res)
	{
	    combine(str,0,n-1);                       
	}
	else
	{
	    printf("Please enter the distinct charcter\n");
	}
	printf("\n");
	getchar();
	printf("Do you want to continue(y/Y): "); // continue option 
	scanf("%c",&choice);
    }while(choice == 'y' || choice == 'Y');
    return 0;
}
size_t my_strlen( const char *str) 
{
    int count=0;
    while(*str != '\0') // checking string is equal to or not till '\0'
    {
	count++; // increment count
	str++; // increment str
    }
    return count;
}
void combine(char *str,int a,int n) // function definition for all possible combination of a string
{
    int j;
    if(a==n)                                    
    {
	printf("%s\n",str);
    }
    else
    {
	for(j=a;j<=n;j++)
	{
	    swap((str+a),(str+j)); // call swap function
	    combine(str,a+1,n);
	    swap((str+a),(str+j));
	}
    }
}
void swap(char *c1,char *c2) // function definition for swap string charcaters
{
    char temp;
    temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}
int uniq_str(char *str) //function definition for finding unique character in string
{
    int vari=0,varj=0;
    while(str[vari])
    {
	varj=vari+1;
	while(str[varj])
	{
	    if(str[vari] == str[varj])
	    {
		return 0;
	    }
	    varj++;
	}
	vari++;
    }
    return 1;
}
