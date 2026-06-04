//question 5: Write a program which accepts a number from user and count how many digits are strictly less than 6.

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)   // handle negative input
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;   // extract last digit
        if(iDigit < 6)       // check condition
        {
            iCnt++;
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

    iRet = Count(iValue);

    printf("Frequency of digits < 6 is: %d\n", iRet);

    return 0;
}
