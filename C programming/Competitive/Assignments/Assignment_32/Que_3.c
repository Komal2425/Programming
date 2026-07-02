// a program which accepts string from user and convert it into toggle case.

#include <stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        // If uppercase, convert to lowercase
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        // If lowercase, convert to uppercase
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++; // Move pointer to next character
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    strtogglex(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
