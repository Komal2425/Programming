//question 4:Accept one number and check whether it is divisible by 5 or not. 

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0             // FALSE must be defined as 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)      // modulus operator checks divisibility
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);   // correct format specifier and variable

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}
