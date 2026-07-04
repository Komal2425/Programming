// A program which accepts one number from user and off the bit at given position

#include <stdio.h>

typedef unsigned int UINT;

// Helper function containing the service provider logic
UINT OffBit(UINT iNo, int iPos)
{
    // Create a mask by shifting 1 to the left by (iPos - 1) positions
    UINT iMask = 1 << (iPos - 1);

    // Invert the mask and perform bitwise AND to clear the bit
    UINT iResult = iNo & (~iMask);

    return iResult;
}

// Entry point function
int main()
{
    UINT iValue = 0;
    int iBitPos = 0;
    UINT iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter position: ");
    scanf("%d", &iBitPos);

    // Call the helper function
    iRet = OffBit(iValue, iBitPos);

    printf("Output: %u\n", iRet);

    return 0;
}
