//question 5: Write a program which accept number from user and print first 5 multiples of that number.

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d ", iCnt * iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
