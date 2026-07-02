// a program which accepts string from user and check whether that character is present in string or not.

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    if(str == NULL)
    {
        return FALSE;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string:\n");
    scanf("%[^\n]s", arr);

    printf("Enter the character:\n");
    // Note: The space before %c consumes the leftover newline from the previous scanf
    scanf(" %c", &cValue); 

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}
