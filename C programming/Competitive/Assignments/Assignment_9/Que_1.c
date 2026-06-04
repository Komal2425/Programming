//question 1: Count even digits in a number

#include<stdio.h>

int CountEven(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if(iNo < 0)   // Handle negative numbers
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;   // Extract last digit
        if(iDigit % 2 == 0)  // Check even
        {
            iCnt++;
        }
        iNo = iNo / 10;      // Remove last digit
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Count of even digits: %d\n", iRet);

    return 0;
}
