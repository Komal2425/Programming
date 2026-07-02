/*    Input  : F
    Output : TRUE

    Input  : d
    Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    // Check if character is between capital A and capital Z
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital case character\n");
    }
    else
    {
        printf("It is not a Capital case character\n");
    }

    return 0;
}
