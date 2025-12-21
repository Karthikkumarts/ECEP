/*Documentation
Name          : KARTHIK KUMAR TS
Date          : 08/11/21
Description   : WAP to print all ascii characters
Sample i/p    : NONE
sample o/p    : Dec       Oct         Hex        Ascii
		0           000         00          Non Printable
		1           001         01          Non Printable
Documentation*/	 
#include<stdio.h>
int main()
{
    int i;
    printf("Dec\t oct\t Hexa\t ASCII\n");
    for(i=0;i<128;i++)  //for 128 times loop runs
    {
	if (i<32 || i==127) //upto 32 and 127th character is non printable
	{
	    printf("%d\t %3o\t %2x\t non printable\n",i,i,i); 
	}
	else
	{
	    printf("%d\t %3o\t %2x\t %c\n",i,i,i,i); //this prints the value of reamining decimal octa and hexa along with the ascii characters
	}
    }
    return 0;
}

