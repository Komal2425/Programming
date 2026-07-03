// a program to check whether the 5th and 18th bits of a number are ON or OFF.

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    // 5th bit (position 4):  1 << 4  = 0x00000010
    // 18th bit (position 17): 1 << 17 = 0x00020000
    // Combined Mask: 0x00020010
    UINT iMask = 0x00020010; 
    UINT iResult = 0;

    iResult = iNo & iMask;

    // Returns TRUE only if BOTH bits are ON
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
        printf("5th & 18th bits are ON\n");
    }
    else
    {
        printf("5th or 18th bit (or both) is OFF\n");
    }

    return 0;
}
