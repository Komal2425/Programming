// a program which accepts character from user and check whether it is special symbol or not.

#include <stdio.h>

// Defining boolean types to match the template requirements
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkSpecial(char ch)
{
    // Check if character matches any of the specified special symbols
    if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || 
        ch == '%' || ch == '^' || ch == '&' || ch == '*')
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
    
    printf("Enter the character : ");
    scanf("%c", &cValue);
    
    bRet = ChkSpecial(cValue);
    
    if (bRet == TRUE)
    {
        printf("It is a special Character\n");
    }
    else
    {
        printf("It is not a special Character\n");
    }
    
    return 0;
}
