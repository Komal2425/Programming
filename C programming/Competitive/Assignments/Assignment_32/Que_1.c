// a program which accepts string from user and convert it into lower case.

#include <stdio.h>

// Function to convert string to lower case
void strlwrx(char *str)
{
    while (*str != '\0')
    {
        // Check if character is uppercase ('A' to 'Z')
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32; // Convert to lower case using ASCII difference
        }
        str++; // Move pointer to the next character
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    // Accepts string with spaces until a newline is pressed
    scanf("%[^\n]s", arr); 

    strlwrx(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
