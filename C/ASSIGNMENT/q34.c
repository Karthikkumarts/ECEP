/*
 * Name : KARTHIK KUMAR TS
 * Date : 15/12/2021
 * Description : Implement getword,atoi,itoa functions
 * Input : string, string and integer
 * Output : Sample execution
 1. getword
 2. atoi
 3. itoa
 Enter your choice : 1
 Enter a word: Hello
 You entered Hello and length is 5
 Do you want to continue (y/Y) : y
 Enter your choice : 2
 Enter a numeric string: 12345
 String to integer is 12345
 Do you want to continue (y/Y) : y
 Enter your choice : 3
 Enter a number : 1234 
 Integer to string is 1234
 Do you want to continue (y/Y) : n
 */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdio_ext.h>
int get_word(char *);
int my_atoi(char *);
char* my_itoa(int,char *);
void reverse_str(char *,int);
int main()
{
    char option ;
    int choice;
    do
    {
        printf("1.getword\n2.atoi\n3.itoa\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                {
                    char ch[20];
                    int res;
                    printf("Enter the word : ");
                    __fpurge(stdin);
                    scanf("%20[^\n]",ch);
                    res=get_word(ch);
                    printf("%s length is %d\n",ch,res);
                    break;
                }
            case 2:
                {
                    char str[50];
                    int num;
                    printf("Enter the string : ");
                    __fpurge(stdin);
                    scanf("%50[^\n]",str);
                    num=my_atoi(str);
                    printf("num : %d\n",num);
                    break;
                }
            case 3:
                {
                    int numbr;
                    printf("Enter the number : ");
                    scanf("%d",&numbr);
                    char word[50];
                    printf("Inter to string is : \"%s\"\n",my_itoa(numbr,word));
                    break;
                }
            default :
                {
                    printf("Enter the choice from above option only\n");
                    break;
                }
        }
        __fpurge(stdin);
        printf("\n");
        printf("Do you want to continue(y/n): ");
        scanf(" %s",&option);
    }while(option == 'y' || option == 'Y');
    return 0;
}
int get_word(char *ch)
{
    int var=0;
    while(ch[var] != '\0' && ch[var] != ' ')
    {
        var++;
    }
    ch[var]='\0';
    return var;
}
int my_atoi(char *str) // function definition
{  
    int temp=0, flag = 0;
    if(*str == '-') // for negative number
    {
        flag--;
        str++;
    }
    if(*str == '+')
    {
        str++;
    }
    while (*str)                     
    {
        if (isdigit(*str)) // for digit
        {
            temp=(temp *10) + (*str -48);
            str++; 
        }
        else
        {
            break;
        }
    }
    return flag? (temp * flag):temp;
}   
char* my_itoa(int num,char *str)
{
    int var =0,flag=0,value=10,rem;
    if(num ==0)
    {
        str[var]='0';
        str[var++]='\0';
        return str;
    }
    if(num<0 && value ==10)
    {
        flag =1;
        num=-num;
    }
    while(num!=0)
    {
        rem=num%value;
        if(rem>9)
        {
            str[var++] = (rem-10)+'A';
        }
        else
        {
            str[var++] = rem +'0';
        }
        num=num/value;
    }
    if(flag)
    {
        str[var++] = '-';
    }
    str[var]='\0';
    reverse_str(str,var);
    return str;
}
void reverse_str(char word[],int val)
{
    int first=0,second = val-1;
    char temp;
    for(;first<second ;first++,second--)
    {
        temp=*(word+first);
        *(word+first)=*(word+second);
        *(word + second)=temp;
    }
}
