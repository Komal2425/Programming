// A program which accepts one number from user and check whether 9th or 12th bit is ON or OFF

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;
typedef bool BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    // Create masks for the 9th and 12th bit positions (1-indexed)
    UINT iMask9 = 1 << (9 - 1);   // 1 shifted left by 8 positions
    UINT iMask12 = 1 << (12 - 1); // 1 shifted left by 11 positions
    
    // Combine masks using bitwise OR
    UINT iCombinedMask = iMask9 | iMask12;

    // Check if either bit is ON
    if ((iNo & iCombinedMask) != 0)
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
    UINT iValue = 257; // Binary: 0000 0001 0000 0001 (9th bit is ON)
    BOOL bRet = FALSE;

    bRet = ChkBit(iValue);

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
