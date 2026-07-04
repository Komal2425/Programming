// A program which accepts one number from user and toggle the bits from 9th to 13th position

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;
    
    // Construct the mask by setting bits from iStart to iEnd
    for (int i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }
    
    // Toggle the bits in the range using XOR
    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 897; // Binary: 0011 1000 0001
    int iStart = 9;
    int iEnd = 13;
    UINT iRet = 0;
    
    iRet = ToggleBitRange(iValue, iStart, iEnd);
    
    printf("Output: %u\n", iRet); 
    
    return 0;
}
