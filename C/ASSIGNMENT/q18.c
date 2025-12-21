/*
Name : KARTHIK KUMAR T S
Date : 03-01-2022
Description : WAP to find the average by taking input in 3 different ways
Sample execution:
user@emertxe] ./avg
Select the method to calculate average:
1. Scan from keyboard.
2. Proceed with environment variable arguments.
Enter you choice : 1
Enter the total number of integers : 4
Enter the elements : 3 5 10 7
The average of entered numbers : 6.25
*/

#include <stdio.h>
#include <stdlib.h>

/* Function definition for my_atoi() */
int my_atoi(char *ptr)
{
    int x = 0, flag = 1, count = 0;
    while (*ptr)
    {
        while(count == 0)
        {
            if (flag == 1 && *ptr == '-')
            {
                flag = -1;
                ptr++;
            }
            else if (flag == 1 && *ptr == '+')
            {
                flag = 1;
                ptr++;
            }
            count++;
        }

        if (*ptr >= 48 && *ptr <= 57)
        {
            x = (x * 10) + (*ptr - '0');
            ptr++;
        }
        else
            break;

    }
    return x * flag;
}

/* Function definition for my_strtok() */
char * my_strtok(char *str1, const char *str2)
{
    static char *temp;
    static int pos;
    int first_ch = pos;
    int j;

    if( str1 != NULL )
    {
        temp = str1;
    }

    while(temp[pos] != '\0')
    {
        j = 0;
        while(str2[j] != '\0')
        {
            if(str2[j] == temp[pos])
            {
                temp[pos] = '\0';
                pos++;

                if(temp[first_ch] != '\0')
                    return (&temp[first_ch]);
                else
                {
                    first_ch = pos;
                    pos--;
                    break;
                }
            }
            j++;
        }
        pos++;
    }
    if(temp[first_ch] == '\0')
    {
        pos = 0;
        return NULL;
    }
    else
        return (&temp[first_ch]);
}

int main ( int argc, char **argv, char **env )
{
    /* declare the variables */
    int i = 0, n, sum = 0, *ptr = NULL, choice, num[100];
    float avg;
    char *str = NULL, *tok = NULL;
    printf ("Select the method to calculate average:\n1. Scan from keyboard\n2. Command Line Arguments\n3. Proceed with environment variable arguments\nEnter your choice: ");
    scanf ("%d", &choice);

    switch ( choice )
    {
        case 1:
            printf("Enter the total number of integers : ");
            scanf("%d", &n);
            printf ("Enter the elements : ");

            /* Dynamically allocate memory to store the user inputs */
            ptr = ( int * ) malloc ( n * sizeof (int) );
            for ( i = 0; i < n; i++ )
            {
                scanf ("%d", ( ptr + i ));
                /* Calculate sum of the given user inputs */
                sum += *( ptr + i );
            }
            /* Calculate average of the obtained sum */
            avg = ( float ) sum / n;
            printf ("The average of the entered numbers: %g\n", avg);
            break;
        case 2:
            if  (argc > 1) /* Validate if command line arguments are passed by the user */
            {
                for (i = 1; i < argc; i++)
                {
                    /* Convert string to integer by calling my_atoi() */
                    sum += my_atoi(argv[i]); /* Calculate sum of the values passed through command line */
                }
                avg = (float)sum / (argc - 1); //Calculate average of the obtained sum
                printf ("The average of entered numbers : %g\n", avg);
            }
            else
            {
                printf ("Pass the required values through command line\n");
            }
            break;
        case 3:
            /* Collect data from environment variable that was created */
            str = getenv ("arr");
            tok = my_strtok (str, " "); /* Obtain the first token by calling my_strtok() */
            /* To obtain remaining tokens */
            while( tok != NULL )
            {
                /* Convert the string to integer by calling my_atoi() */
                num[i] = my_atoi(tok);
                sum += num[i]; /* Calculate the sum of the tokens obtained */
                tok = my_strtok(NULL, " "); /* Call my_strtok() to obtain consecutive tokens */
                i = i + 1;
            }
            /* Calculate average of entered numbers */
            avg = (float)sum / i;
            printf("The average of entered numbers: %g\n", avg);
            break;
        default:
            printf ("Invalid Choice\n");
            break;
    }
}
