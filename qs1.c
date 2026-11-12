
#include <stdio.h>
#include <string.h>

int main()
{
    char feedback[200];
    char updated[250] = "";
    char letter[2];

    int i;

    // Step 1: Take customer feedback
    printf("Enter customer feedback: ");
    fgets(feedback, 200, stdin);

    // Remove newline
    for(i = 0; feedback[i] != '\0'; i++)
    {
        if(feedback[i] == '\n')
        {
            feedback[i] = '\0';
            break;
        }
    }

    // Step 2: Count characters
    printf("\nTotal characters: %d", strlen(feedback));

    // Step 3: Search for good and bad
    if(strstr(feedback, "bad") != NULL)
    {
        printf("\nWord 'bad' found.");
    }
    else
    {
        printf("\nWord 'bad' not found.");
    }

    if(strstr(feedback, "good") != NULL)
    {
        printf("\nWord 'good' found.");
    }
    else
    {
        printf("\nWord 'good' not found.");
    }

    // Step 4: Replace bad with not good
    strcpy(updated, "");

    for(i = 0; feedback[i] != '\0'; i++)
    {
        if(feedback[i] == 'b' &&
           feedback[i+1] == 'a' &&
           feedback[i+2] == 'd')
        {
            strcat(updated, "not good");
            i = i + 2;
        }
        else
        {
            letter[0] = feedback[i];
            letter[1] = '\0';

            strcat(updated, letter);
        }
    }

    // Step 5: Display updated feedback
    printf("\n\nUpdated feedback: %s", updated);

    return 0;
}
