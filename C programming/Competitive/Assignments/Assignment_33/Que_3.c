// a program which accepts string from user and return location of first occurrence of that character from that string.

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iPos = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iPos;
        }
        str++;
        iPos++;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^\n]s", arr);

    printf("Enter the character:\n");
    // Added a space before %c to handle trailing newline issues
    scanf(" %c", &cValue); 

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}
