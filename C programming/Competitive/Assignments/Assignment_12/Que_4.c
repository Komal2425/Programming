//question 4: Write a program which accepts a number from user and return frequency of 4 in it.

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)   // handle negative input
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;   // extract last digit
        if(iDigit == 4)
        {
            iCnt++;          // increment if digit is 4
        }
        iNo = iNo / 10;      // remove last digit
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("Frequency of 4 is: %d\n", iRet);

    return 0;
}
