// a program which accepts string from user and count number of capital characters from that string.

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    // Loop through the string until the null character is reached
    while(*str != '\0')
    {
        // Check if the current character is an uppercase letter
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++; // Move to the next character
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    iRet = CountCapital(arr);

    printf("%d\n", iRet);

    return 0;
}
