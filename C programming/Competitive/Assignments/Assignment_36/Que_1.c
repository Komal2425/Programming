// Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.

#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    // 7th bit = 1 << 6 (0x00000040)
    // To turn it OFF, we invert the mask: ~0x00000040
    UINT iMask = 0X00000040;
    
    // Bitwise AND with inverted mask clears the bit
    return (iNo & (~iMask));
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    
    printf("Enter number: ");
    scanf("%u", &iValue);
    
    iRet = OffBit(iValue);
    
    printf("Modified number: %u\n", iRet);
    
    return 0;
}
