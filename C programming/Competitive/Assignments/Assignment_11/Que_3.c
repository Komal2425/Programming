//question 3: Write a program which accepts starting and ending point from user and return addition of all numbers in between that range.

#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
    int iSum = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        return -1;   // indicates invalid range
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        iSum += i;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is: %d\n", iRet);
    }

    return 0;
}
