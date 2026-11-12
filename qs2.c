
#include <stdio.h>
#include <string.h>

int main()
{
    char names[10][50];
    char temp[50];

    // Step 1: Input 10 student names
    for(int i = 0; i < 10; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], 50, stdin);

        // Remove newline
        for(int j = 0; names[i][j] != '\0'; j++)
        {
            if(names[i][j] == '\n')
            {
                names[i][j] = '\0';
                break;
            }
        }
    }

    // Step 2: Sort names alphabetically
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9 - i; j++)
        {
            if(strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Step 3: Display sorted names
    printf("\nNames in alphabetical order:\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
