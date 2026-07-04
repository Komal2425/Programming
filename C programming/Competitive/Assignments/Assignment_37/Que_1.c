// a program which checks whether the bit at given position is ON or OFF

#include <stdio.h>

// Defining boolean types since standard C requires stdbool.h or custom definitions
typedef int BOOL;
#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;

// Helper function containing the service provider logic
BOOL ChkBit(UINT iNo, int iPos)
{
    // Create a mask by shifting 1 to the left by (iPos - 1) positions
    UINT iMask = 1 << (iPos - 1);

    // Perform bitwise AND to check if the bit is set
    if ((iNo & iMask) != 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

// Entry point function
int main()
{
    UINT iValue = 0;
    int iBitPos = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter position: ");
    scanf("%d", &iBitPos);

    // Call the helper function
    bRet = ChkBit(iValue, iBitPos);

    if (bRet == TRUE)
    {
        printf("Output: TRUE\n");
    }
    else
    {
        printf("Output: FALSE\n");
    }

    return 0;
}
