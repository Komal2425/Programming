//question 2: Count odd digits in a number

#include<stdio.h>

int CountOdd(int iNo)
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
        if(iDigit % 2 != 0)  // Check odd
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

    iRet = CountOdd(iValue);

    printf("Count of odd digits: %d\n", iRet);

    return 0;
}
