// a program which accepts string from user and display it in reverse order.

#include <stdio.h>

void Reverse(char *str)
{
    char *ptr = str;

    // Handle edge case for empty string
    if (str == NULL || *str == '\0')
    {
        return;
    }

    // 1. Move the pointer to the end of the string
    while (*ptr != '\0')
    {
        ptr++;
    }
    
    // Move back one step to point to the last actual character instead of '\0'
    ptr--;

    // 2. Print characters backward until reaching the start of the string
    while (ptr >= str)
    {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    Reverse(arr);

    return 0;
}
