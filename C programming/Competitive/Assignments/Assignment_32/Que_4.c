// a program which accepts string from user and display only digits from that string.

#include <stdio.h>

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        // Check if character is a digit
        if (*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++; // Move pointer to next character
    }
    printf("\n"); // Print newline at the end
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    DisplayDigit(arr);

    return 0;
}
