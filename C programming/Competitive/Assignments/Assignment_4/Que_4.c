//question 4:Accept number from user and return summation of all its non factors.

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)   // not a factor
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Summation of non factors: %d\n", iRet);

    return 0;
}
