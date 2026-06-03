//question 5: Accept number from user and return difference between summation of factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0, iSumNonFact = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)   // factor
        {
            iSumFact = iSumFact + iCnt;
        }
        else                  // non-factor
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Difference: %d\n", iRet);

    return 0;
}
