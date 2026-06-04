//question 1: Write a program which accepts a number from user and display all digits in reverse order.

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)   // handle negative input
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;     // extract last digit
        printf("%d\n", iDigit);
        iNo = iNo / 10;        // remove last digit
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}
