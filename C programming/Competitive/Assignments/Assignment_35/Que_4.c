// a program to check whether the 7th, 8th and 9th bits of a number are ON or OFF.

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    // 7th bit = 1 << 6 (0x40)
    // 8th bit = 1 << 7 (0x80)
    // 9th bit = 1 << 8 (0x100)
    // Combined Mask = 0x000001C0
    UINT iMask = 0x000001C0;
    
    // Perform bitwise AND operation
    if((iNo & iMask) == iMask)
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
        printf("7th, 8th, and 9th bits are ON\n");
    }
    else
    {
        printf("Bits are OFF or incomplete\n");
    }
    
    return 0;
}
