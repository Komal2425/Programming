// a program which accepts string from user and count number of small characters from that string.

#include <stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    // Loop through the string until the null character is reached
    while(*str != '\0')
    {
        // Check if the current character is a lowercase letter
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(arr);

    printf("%d\n", iRet);

    return 0;
}
