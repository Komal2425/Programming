/*
    Input  : F
    Output : TRUE

    Input  : &
    Output : FALSE

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    // Check if character is uppercase or lowercase alphabet
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return 0;
}
