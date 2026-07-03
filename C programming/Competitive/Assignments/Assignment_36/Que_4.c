// Write a program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number.

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    // 7th bit  = 1 << 6  (0x00000040)
    // 10th bit = 1 << 9  (0x00000200)
    // Combined Mask      = 0x00000240
    UINT iMask = 0x00000240;
    
    // Bitwise XOR toggles the targeted bits
    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    
    printf("Enter number: ");
    scanf("%u", &iValue);
    
    iRet = ToggleBit(iValue);
    
    printf("Modified number: %u\n", iRet);
    
    return 0;
}
