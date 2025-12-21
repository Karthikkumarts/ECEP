/*
Name             : KARTHIK KUMAR TS
Date             : 12/12/2021
Description      : WAP to Replace each string of one or more blanks by a single blank.
Sample execution :Enter the string with more spaces in between two words
                                   Pointers    are    sharp  knives.
                                   String with reduced space:
                                   Pointers are sharp knives.
*/
#include<stdio.h>
int print (char *s);

int print (char *s)    // function for reducing the multiple spaces to one space
{
    int flag = 0;    // flag for removing the starting spaces
    while(*s!='\0')    // for checking one by one element up to end of string
    {
    if( *s != '\t' && *s != ' ' )     // printing the non spaces
    {
        printf("%c",*s);
        flag++;
    }
    else if(flag)    // print one space
        printf(" ");
    if(*s == ' ' || *s == '\t')
    {
        while(!(*s !=' ') || !(*s != '\t') )    // removing the multiple spaces
        {
        s++;
        }
        s--;
    }
    s++; // incrementing the address of the string to next element
    }
}

int main()
{
    char choice;
    do
    {
    int i;
    char str[1000];
    printf("Enter the string with more spaces between words\n");
    scanf("%[^\n]",str);    // reading the string
    printf("String with reduced spaces :\n");
    print(str);
    printf("\nDo you want to continue(Y/y): ");
    getchar();
    scanf("%c",&choice);
    __fpurge(stdin);
    } while ( choice == 'y' || choice == 'Y' ); //condition to continue the loop
    return 0;
}    
