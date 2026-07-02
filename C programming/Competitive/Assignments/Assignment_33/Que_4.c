// a program which accepts string from user and return location of last occurrence of that character from that string.

#include <stdio.h>

int LastChar(char *str, char ch)
{
    int iPos = 0;
    int iLastPos = -1;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLastPos = iPos;
        }
        str++;
        iPos++;
    }
    return iLastPos;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^\n]s", arr);

    printf("Enter the character:\n");
    // Space added before %c to ignore trailing newline character
    scanf(" %c", &cValue); 

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}
