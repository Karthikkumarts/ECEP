/*
Name : KARTHIK KUMAR TS
Date : 30-01-2022
Description : WAP to concatenate two files
Sample execution: -
Test Case 1:
user@emertxe] ./my_cat
Hello
Hello
Test Case 2:
user@emertxe] ./my_cat file1.txt
<contents of file1.txt>
user@emertxe]
Test Case 2:
user@emertxe] ./my_cat file1.txt file2.txt file3.txt
<copy the contents of file1.txt and file2.txt into file3.txt>
user@emertxe]
*/

#include<stdio.h>
#include<stdlib.h>

void my_cpy(FILE *ptr1, FILE *ptr2);
int main(int argc, char *argv[])
{
    FILE *file1, *file2, *file3;   //declaraing source and destination file
     int ch;                        //declaring int variable
     char ch1[100];
    
    
    if(argc == 1)      //if file name is not passed just read the string from user and print that string itself
    {    char str;
        printf("Enter the string : ");
        while((str = fgetc(stdin)) != '\n')
        {
            fputc(str, stdout);
        }
        printf("\n");

    }
    else if(argc == 2)         //file is passed through command line then execute the and heck the following code
    {   
        file1 = fopen(argv[1], "r");   //opend first file in read mode
        if( file1 == NULL)         //if file is not exit print the error message
        {
            printf("ERROR : %s file is not present\n",argv[1]);
           
        }
        else                               //print the content of the first file
        {
            printf("Content of first file  :\n");
           
            while (fgets(ch1 , 100, file1) > 0)
            {
                fputs(ch1, stdout);
            }
        fclose(file1);       
        }
           
    }
    else if(argc == 3)        //for second file
    {
       
        //opend both file in read mode only
        file1 = fopen(argv[1], "r");
        file2 = fopen(argv[2], "r");

        if(file1 == NULL || file2 == NULL)   //if any one file is not present print error message else do else part
        {   
           
            if (file1 == NULL)
                printf("Error : %s file is not present,please give correct file\n", argv[1]);
            else
            printf("%s file is present\n", argv[1]);
                if (file2 == NULL)
                printf("Error : %s file is not present,please give correct file\n", argv[2]);
            else
            printf("%s file is present\n", argv[2]);
        }
       
        else                      //printing the content of bothfirst and second file
        {   
            printf("Content of first file and second file  :\n");
            while (fgets(ch1 , 100, file1) > 0)
            {
                fputs(ch1, stdout);
            }
            while (fgets(ch1 , 100, file2) > 0)
            {
                fputs(ch1, stdout);
            }
            fclose(file1);   
            fclose(file2);   
        }

    }
    else if(argc == 4)   //if we passed 3rd file to concatenate do folowing operation
    {   
        //opned first two file in read mode
        file1=fopen(argv[1], "r");
        file2=fopen(argv[2], "r");   
       
        if(file1 == NULL || file2 == NULL)   //error checking
        {   
           
            if (file1 == NULL)
                printf("Error : %s file is not present,please give correct file\n", argv[1]);
            else
            printf("%s file is present\n", argv[1]);
                if (file2 == NULL)
                printf("Error : %s file is not present,please give correct file\n", argv[2]);
            else
            printf("%s file is present\n", argv[2]);
        }
        else
        {
            file3 = fopen(argv[3], "w+");  //opend third file write read mode

             my_cpy(file1,file3);      //call the my_cpy function
            my_cpy(file2,file3);

            rewind(file3);
                while (fgets (ch1, 100, file3) > 0)  //print the content of 3rd file
                {
                      fputs(ch1, stdout);
                }

            fclose(file1);
            fclose(file2);
            fclose(file3);
        }
    }
return 0;
}

void my_cpy(FILE *ptr1, FILE *ptr2)  //function defination of my_cpy
{
    char ch[100];
    while (fgets(ch, 100, ptr1) > 0)
    {
        fputs(ch, ptr2);
    }
}
