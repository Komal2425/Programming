/*
    Input  : g
    Output : TRUE

    Input  : G
    Output : FALSE

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    // Check if character is between small a and small z
    if(ch >= 'a' && ch <= 'z')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case character\n");
    }
    else
    {
        printf("It is not a Small case character\n");
    }

    return 0;
}
