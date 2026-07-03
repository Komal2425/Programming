// Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    // 7th bit = 1 << 6 (0x00000040)
    UINT iMask = 0x00000040;
    
    // Bitwise XOR toggles the targeted bit
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
