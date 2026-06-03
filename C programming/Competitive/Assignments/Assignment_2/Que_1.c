//question 1: Accept one number from user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    // Updater: loop until iCnt reaches iNo
    while( iCnt < iNo )
    {
        printf("* ");
        iCnt++;   // increment counter
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);   // correct format specifier

    Display(iValue);

    return 0;
}
