// a program to check whether the 7th & 15th & 21st & 28th bits of a number are ON or OFF.

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    // 7th bit (position 6):   1 << 6  = 0x00000040
    // 15th bit (position 14): 1 << 14 = 0x00004000
    // 21st bit (position 20): 1 << 20 = 0x00100000
    // 28th bit (position 27): 1 << 27 = 0x08000000
    // Combined Mask: 0x08104040
    UINT iMask = 0x08104040; 
    UINT iResult = 0;

    iResult = iNo & iMask;

    // Returns TRUE only if ALL four bits are ON
    if(iResult == iMask)
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
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%u", &iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("7th, 15th, 21st, and 28th bits are ON\n");
    }
    else
    {
        printf("One or more of the specified bits are OFF\n");
    }

    return 0;
}
