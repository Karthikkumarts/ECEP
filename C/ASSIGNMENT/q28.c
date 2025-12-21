/*
Name : KARTHIK KUMAR TS
Date : 30-01-2022
Description : WAP to implement the student record using array of structures.
Sample execution:
Test Case 1:
user@emertxe] ./student_record
Enter no.of students : 2
Enter no.of subjects : 2
Enter the name of subject 1 : Maths
Enter the name of subject 2 : Science
----------Enter the student datails-------------
Enter the student Roll no. : 1
Enter the student 1 name : Nandhu
Enter Maths mark : 99
Enter Science mark : 91
----------Enter the student datails-------------
Enter the student Roll no. : 2
Enter the student 2 name : Bindhu
Enter Maths mark : 88
Enter Science mark : 78
----Display Menu----
1. All student details
2. Particular student details
Enter your choice : 2

----Menu for Particular student----
1. Name.
2. Roll no.
Enter you choice : 1
Enter the name of the student : Nandhu
Roll No.   Name           maths         science
1              Nandhu        99               91
Do you want to continue to display(Y/y) : n
Do you want to continue(Y/y) : n
*/

#include <stdio.h>
#include <stdlib.h>

// function declaration
int my_strcmp(char *str1, char *str2);
char grade(float avg);

// structure declaration
struct student
{
    int roll_num;
    char name[50];
    int *mark;
};

int main()
{
    char ch1, ch2;
    do
    {
        int no_of_students = 0, no_of_subjects = 0;
        char (*str)[30];
        int option, choice;
        float sum = 0, avg = 0;

        // prompt to read num of students and subject details
        printf("Enter number of students : ");
        scanf("%d", &no_of_students);
        printf("Enter number of subjects : ");
        scanf("%d", &no_of_subjects);

        // Memory allocation to store subject
        str = malloc (sizeof(*str) * no_of_subjects);

        // structure variable declaration
        struct student S[no_of_students];

        for (int i = 0; i < no_of_subjects; i++)
        {
            printf("Enter name of the Subject %d : ", i + 1 );
            scanf("%s", str[i]);  // read subject name
        }

        for (int i = 0; i < no_of_students; i++)
        {
            printf("-------------------------Enter students details--------------------\n");
            printf("Enter the student %d Roll Number : ", i + 1);
            fflush(stdin);
            scanf("%d", &S[i].roll_num);   // Read roll num from user
            printf("Enter the student %d name : ", i + 1);
            fflush(stdin);
            scanf("%s",S[i].name);        // Read name from user

            // Memory allocation to store mark for each student
            S[i].mark = ( int * )malloc ( sizeof(int) * no_of_subjects);

            for (int j = 0; j < no_of_subjects; j++)
            {
                printf("Enter the %s mark : ", str[j]);
                scanf("%d", &S[i].mark[j]);   // read mark from user
            }
        }
        do
        {
            printf("-----------------------DISPLAY MENU-----------------------------\n");
            printf("1. All Student Details\n2. Particular Student Details\nEnter your choice : ");
            scanf("%d", &option);

            switch (option)
            {
                case 1 :
                    printf("Menu for All Student Details\n");
                    printf("Roll no\t\tName\t\t");

                    for(int j = 0; j < no_of_subjects; j++)
                    {
                        printf("\t\t%s\t\t", str[j]);  // printing subjects
                    }

                    printf("\t\tAverage\t\tGrade\n");

                    for (int i = 0; i < no_of_students; i++)
                    {
                        sum = 0;
                        for (int j = 0; j < no_of_subjects; j++)
                        {
                            sum = sum + S[i].mark[j];   // adding mark for each student
                        }
                        printf("%d\t\t%s\t\t", S[i].roll_num, S[i].name);   // display roll num and name

                        for (int j = 0; j < no_of_subjects; j++)
                        {
                            printf("%d\t\t", S[i].mark[j]);   // display mark of each subject
                        }

                        avg = sum / no_of_subjects;   // finding avg for each student

                        printf("%g\t\t%c\n", avg, grade(avg));  // display avg and grade
                    }

                    break;
                case 2 :
                    {
                        printf("-----------------------Menu for particular student--------------------\n");
                        printf("1. Name\n2. Roll no\nEnter your choice: ");
                        scanf("%d",&choice);

                        if (choice == 1)
                        {
                            char student_name[40];

                            // Prompt to read name of the student to display the detail of that particular student
                            printf("Enter name of the student : ");
                            scanf("%s",student_name);

                            sum = 0;
                            avg = 0;
                            int count = 0;

                            for (int i=0; i < no_of_students; i++)
                            {

                                if ( my_strcmp (student_name, S[i].name) == 0)   // function call to compare
                                {
                                    count++;
                                    printf("Roll No\t\tName\t\t\t");

                                    for(int j = 0; j < no_of_subjects; j++)
                                    {
                                        printf("%s\t\t", str[j]);
                                        sum = sum + S[i].mark[j];
                                    }

                                    avg = sum / no_of_subjects;

                                    printf("Average\t\tGrade\n");
                                    printf("%d\t\t%s\t\t",S[i].roll_num, S[i].name);

                                    for(int j = 0; j < no_of_subjects; j++)
                                    {
                                        printf("%d\t\t",S[i].mark[j] );
                                    }

                                    printf("%g\t\t%c\n",avg,grade(avg));

                                }
                            }
                            if (count == 0)
                            {
                                printf("%s student detail is not available\n", student_name);
                            }
                        }
                        else if ( choice == 2)
                        {
                            int number;
                            sum = 0;
                            avg = 0;                                  
                            printf("Enter the Student Roll Number : ");
                            scanf("%d",&number);

                            for (int i=0; i < no_of_students; i++)
                            {
                                if ( number == S[i].roll_num )  // comparing roll number
                                {
                                    printf("Roll No\t\tName\t\t\t");

                                    for(int j=0; j < no_of_subjects; j++)
                                    {
                                        printf("%s\t\t", str[j]);
                                        sum = sum + S[i].mark[j];
                                    }
                                    avg = (sum / no_of_subjects);

                                    printf("Average\t\tGrade\n");

                                    printf("%d\t\t%s\t\t",S[i].roll_num, S[i].name);

                                    for(int j=0; j < no_of_subjects; j++)
                                    {
                                        printf("%d\t\t",S[i].mark[j] );
                                    }

                                    printf("%g\t\t%c\n",avg,grade(avg));
                                }

                            }
                        }
                        else if (choice != 1 && choice != 2)
                        {
                            printf("Enter valid option\n");
                        }

                        break;
                    }

                default :
                    printf("Error : Invalid choice \n");
                    break;
            }

            printf("Do you want to continue to display(y/Y) : "); // asks permisssion from user to repeat the operation
            scanf(" %c",&ch2);

        }while (ch2 == 'Y' || ch2 == 'y');        // condition checking to repeat the display function

        free(str);
        str = NULL;
        printf("Do you want to repeat the operation (y/Y) : "); // Prompt to ask permission from user to repeat the operation
        scanf(" %c",&ch1);

    }while (ch1 == 'Y' || ch1 == 'y');        // condition checking for repetetion of reading student details

    return 0;
}

char grade(float avg)
{
    if ( avg >= 90 )
    {
        return 'A';
    }
    else if (avg >= 80 && avg < 90)
    {      
        return 'B';
    }
    else if (avg >= 70 && avg < 80)
    {
        return 'C';
    }
    else if (avg >= 60 && avg < 70)
    {
        return 'D';
    }
    else if (avg >= 50 && avg < 60)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}

int my_strcmp( char *str1, char *str2)
{
    // compare two strings with case insensitive
    while ( (*str1 && *str2) && (*str1 == *str2) || (*str1 - 32 == *str2) || (*str1 == *str2 - 32) )
    {
        str1++;
        str2++;
    }
    return *str2 - *str1;  // If both the strings are same means it will return 0 else ( >0 or <0)
}
