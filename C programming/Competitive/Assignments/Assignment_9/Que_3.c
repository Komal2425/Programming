//question 3:Accept no from user and return the count of digits in betweem 3 and 7.

#include <stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if(iNo < 0)   // Handle negatives
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;   // Extract digit
        if(iDigit > 3 && iDigit < 7)  // Check range (exclusive)
        {
            iCnt++;
        }
        iNo = iNo / 10;      // Remove digit
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("Count of digits between 3 and 7: %d\n", iRet);

    return 0;
}
