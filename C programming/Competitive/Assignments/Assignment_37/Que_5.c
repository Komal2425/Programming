// A program which accepts one number from user and toggle the first and last nibble of the number

#include <stdio.h>

typedef unsigned int UINT;

// Helper function containing the service provider logic
UINT ToggleBit(UINT iNo)
{
    // Mask for the first (0x0F) and last (0xF0000000) nibbles combined
    UINT iMask = 0xF000000F;

    // Perform bitwise XOR to toggle all 8 bits at once
    UINT iResult = iNo ^ iMask;

    return iResult;
}

// Entry point function
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    // Call the helper function
    iRet = ToggleBit(iValue);

    printf("Output: %u\n", iRet);

    return 0;
}
