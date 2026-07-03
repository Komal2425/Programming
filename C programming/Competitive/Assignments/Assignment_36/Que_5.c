// Write a program which accept one number from user and on 1st, 2nd, 3rd and 4th bit of that number. Return modified number.

#include <stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    // 1st bit = 1 << 0 (0x01)
    // 2nd bit = 1 << 1 (0x02)
    // 3rd bit = 1 << 2 (0x04)
    // 4th bit = 1 << 3 (0x08)
    // Combined Mask   = 0x0000000F
    UINT iMask = 0x0000000F;
    
    // Bitwise OR sets the targeted bits to 1 (ON)
    return (iNo | iMask);
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    
    printf("Enter number: ");
    scanf("%u", &iValue);
    
    iRet = OnBit(iValue);
    
    printf("Modified number: %u\n", iRet);
    
    return 0;
}
