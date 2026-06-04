//question 5: Difference between sum of even digits and sum of odd digits in a number

#include<stdio.h>

int DiffEvenOdd(int iNo)
{
    int iEvenSum = 0, iOddSum = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenSum += iDigit;
        }
        else
        {
            iOddSum += iDigit;
        }
        iNo = iNo / 10;
    }
    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = DiffEvenOdd(iValue);
    printf("%d",iRet);

    return 0;
}
