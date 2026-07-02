/*               
                   A program which accepts string from user and 
    return difference between frequency of small characters and frequency of capital characters.
*/


#include <stdio.h>

int Difference(char *str)
{
    int iSmallCnt = 0;
    int iCapitalCnt = 0;

    // Loop through the string until the null character is reached
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmallCnt++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapitalCnt++;
        }
        str++; // Move to the next character
    }

    return iSmallCnt - iCapitalCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string");
    scanf("%[^\n]s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}
