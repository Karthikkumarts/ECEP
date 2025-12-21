/*Documentation
Name         : KARTHIK KUMAR TS
Date           : 17/12/2021
Description : WAP to implement strtok function
Sample execution : ./a.out
Enter the input string: krishna:-nanda:-how.are,you'today

Enter the delimiter string: :-.,'
Tokens:
karthik 
kumar
how
are
you
today

Do you want to continue(y/Y):k
 */
#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
char* my_strtok(char *str, char *comp);
int main()
{
    char ch, str[200], *ptr, delimit[50];    //Declaring the local variables
    int i = 0, len = 0;
    do
    {
    printf("Enter the input string: ");
    scanf("%[^\n]", str);
    printf("\nEnter the delimiter string: ");
    getchar();
    scanf("%[^\n]", delimit);
    ptr = my_strtok(str, delimit);        //calling function my_strtok
    printf("Tokens:\n");
    while (ptr != NULL)    //when ptr is equal to null calling my strtok function to get the next token
    {
        printf("%s\n", ptr);
        ptr = my_strtok(NULL, delimit);
    }
    printf("\n");
    printf("Do you want to continue(y/Y):");
    scanf("\n%c", &ch);
    __fpurge(stdin);
    }while (ch == 'y' || ch == 'Y');
}
char* my_strtok(char *str, char *comp)
{
    static int pos;
    static char *str1;
    int i = 0, start = pos;
    if(str != NULL)
    str1 = str;
    i = 0;             //Declaring local variables
    int j = 0;
    while (str1[pos] != '\0')      //run loop until reach end of string
    {
    j = 0;
    while (comp[j] != '\0')    //comparing of one of the delimeter matches the character in the string
    {
        if (str1[pos] == comp[j])   //position point to the next location in the string that we have to read
        {
        str1[pos] = '\0';     //replace the delimeter by \0 to break the string
        pos = pos + 1;
        if (str1[start] != '\0')    //start specifies the location from where we have to start reading the next character
            return (&str1[start]);
        else
        {
            start = pos;    //move to the next string after the delimeter
            pos--;    //decrementing as it will be incremented at the end of the while loop
            break;
        }
        }
        j++;
    }
    pos++;
    }
    str1[pos] = '\0';
    if (str1[start] == '\0')     //returns null when string equal to '\0' or returns address of string
    return NULL;
    else
    return &str1[start];
}
