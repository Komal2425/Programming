// a program to check whether the first and last bits of a number are ON or OFF.

#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    // 1st bit = 1 << 0  (0x00000001)
    // 32nd bit = 1 << 31 (0x80000000)
    // Combined Mask = 0x80000001
    UINT iMask = 0x80000001;
    
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
        printf("First and last bits are ON\n");
    }
    else
    {
        printf("Bits are OFF or incomplete\n");
    }
    
    return 0;
}
