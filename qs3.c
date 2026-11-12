
#include <stdio.h>
#include <string.h>

int main()
{
    char email[100];
    char domain[100];

    // Step 1: Take email input
    printf("Enter employee email: ");
    fgets(email, 100, stdin);

    // Remove newline
    for(int i = 0; email[i] != '\0'; i++)
    {
        if(email[i] == '\n')
        {
            email[i] = '\0';
            break;
        }
    }

    // Step 2: Find @ and extract domain
    if(strchr(email, '@') != NULL)
    {
        strcpy(domain, strchr(email, '@') + 1);

        printf("Email: %s\n", email);
        printf("Domain: %s", domain);
    }
    else
    {
        printf("Invalid email address!");
    }

    return 0;
}
