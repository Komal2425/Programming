// A program which accepts one number from user and count the number of ON(1) bits in it

#include <stdio.h>

// Defining UINT if not already defined by the environment
typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;

    // Loop until all bits are processed
    while (iNo > 0)
    {
        // Check if the last bit is 1
        if ((iNo & 1) == 1)
        {
            iCount++;
        }
        // Right shift by 1 to check the next bit
        iNo = iNo >> 1;
    }

    return iCount;
}

int main()
{
    UINT iValue = 11; // Binary: 1011
    int iRet = 0;

    iRet = CountOne(iValue);

    printf("Output: %d\n", iRet); // Expected Output: 3

    return 0;
}
