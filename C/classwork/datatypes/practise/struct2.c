#include<stdio.h>
#include<string.h>

typedef struct
{
    int id;
    char name[20];
    char add[20];
}student;


int main()
{
    int choice,i,num;
    char ch;
    printf("enter the how many students required : ");
    scanf("%d",&num);
    student s[num];
    do{
	printf("1.enter the details\n2.print the details\n");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:
		for(i = 0 ; i < num; i++)
		{
		printf("enter the id s[%d]:",i);
		scanf("%d",&s[i].id);
		printf("enter the name s[%d]",i);
                scanf("%s",s[i].name);
		printf("enter the address s[%d]",i);
                scanf("%s",s[i].add);
		}
		break;
	    case 2:
		for(i = 0 ; i< num; i++)
		{
		printf("enter the id s[%d] id : %d\n",i,s[i].id);
		printf("enter the name s[%d] name : %s\n",i,s[i].name);
		printf("enter the address s[%d] add : %s\n",i,s[i].add);
		}
		break;
	    default:
		break;
	}
	printf("do want to continue(press y or n) : ");
	getchar();
	scanf("%c",&ch);
    }while(ch == 'y');
}

