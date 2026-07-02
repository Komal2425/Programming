// a program which accepts string from user and convert it to upper case.

#include <stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        // Check if character is lowercase ('a' to 'z')
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32; // Convert to upper case
        }
        str++; // Move pointer to next character
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    struprx(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
