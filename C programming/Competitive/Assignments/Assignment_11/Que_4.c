//question 4: Write a program which accepts starting and ending point from user and return addition of all even numbers in between that range.

#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;

    // Validation
    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        return -1;   // indicates invalid range
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)   // check even
        {
            iSum += i;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition of even numbers is %d\n", iRet);
    }

    return 0;
}
