//question 4: Write a program which accept number from user and print all odd numbers till that number.

#include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)   // odd check
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}
