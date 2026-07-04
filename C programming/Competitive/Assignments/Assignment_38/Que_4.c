// A program which accepts one number from user and check whether 3rd or 7th bit is ON or OFF

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;
typedef bool BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    // Filter out invalid positions (assuming 32-bit integer system)
    if (iPos1 < 1 || iPos1 > 32 || iPos2 < 1 || iPos2 > 32)
    {
        return FALSE;
    }

    // Create masks for both positions (1-indexed)
    UINT iMask1 = 1 << (iPos1 - 1);
    UINT iMask2 = 1 << (iPos2 - 1);
    
    // Combine masks
    UINT iCombinedMask = iMask1 | iMask2;

    // Check if either of the target bits is ON
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
    UINT iValue = 10; // Binary: ...00001010 (Bits at 2 and 4 are ON)
    int iPos1 = 3;
    int iPos2 = 7;
    BOOL bRet = FALSE;

    bRet = ChkBit(iValue, iPos1, iPos2);

    // Note: Based on the assignment image example, Input 10, 3, 7 returns TRUE. 
    // This implies the source problem likely expects checking if any bit is ON, 
    // or has a typo in its example input representation.
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
