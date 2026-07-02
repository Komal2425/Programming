// a program which accepts string from user and count frequency of particular character from that string.

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^\n]s", arr);

    printf("Enter the character:\n");
    // Added a space before %c to ignore the trailing newline character
    scanf(" %c", &cValue); 

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n", iRet);

    return 0;
}
