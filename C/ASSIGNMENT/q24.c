/*
Name : KARTHIK KUMAR TS
Date : 30-01-2022
Description : Implement a my_cp() function.
Sample execution: -
Test Case 1:
user@emertxe] ./my_cp file1.txt file2.txt
Data copied successfully
user@emertxe] ls
file1.txt file2.txt
Test Case 2:
user@emertxe] ./my_cp file1.txt
Destination file missing
Test Case 3:
user@emertxe] ./my_cp
Error : filenames not passed
Test Case 4:
user@emertxe] ./my_cp file.txt file1.txt
file.txt : No such a file
*/

// include header file
#include <stdio.h>
int main(int argc, char *argv[], int *envp[])
{
        if (argc <= 1)
        {
                printf("Error : filenames not passed\n");
                return 2;
        }
        if (argc == 2)
        {
            printf("Destination file missing\n");
            return 2;
        }
        FILE *fptr, *fptr1;
        char ch;
        fptr = fopen(argv[1], "r");
        if (fptr == NULL)
        {
                printf("%s : No such a file\n", argv[1]);
                return 1;
        }
        fptr1 = fopen(argv[2], "w+");
        while((ch = fgetc(fptr)) != EOF)
        {
                fputc(ch, fptr1);
        }
        printf("Data copied succesfull\n");
        printf("The updated contents of destination file %s is :\n", argv[2]);
        rewind(fptr1);
        while ((ch = fgetc(fptr1)) != EOF)
        {
                fputc(ch, stdout);
        }
        fclose(fptr1);
        fclose(fptr);
        return 0;
}
