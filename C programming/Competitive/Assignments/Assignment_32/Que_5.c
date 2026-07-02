// a program which accepts string from user and count number of white spaces from that string.

#include <stdio.h>

int CountSpace(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        // Check if character is a white space
        if (*str == ' ')
        {
            iCount++;
        }
        str++; // Move pointer to next character
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    iRet = CountSpace(arr);

    printf("Output: %d\n", iRet);

    return 0;
}
