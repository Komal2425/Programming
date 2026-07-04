// A program which accepts two numbers from user and display position of common ON(1) bits in it

#include <stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iMask = iNo1 & iNo2; // Isolate common ON bits
    int iPos = 1;

    // Loop through the bits from right to left
    while (iMask > 0)
    {
        // If the rightmost bit is 1, print its current position
        if ((iMask & 1) == 1)
        {
            printf("%d ", iPos);
        }
        // Move to the next bit position
        iMask = iMask >> 1;
        iPos++;
    }
    printf("\n");
}

int main()
{
    UINT iValue1 = 10; // Binary: 1010
    UINT iValue2 = 15; // Binary: 1111
    
    printf("Output: ");
    CommonBits(iValue1, iValue2); // Expected Output: 2 4

    return 0;
}
