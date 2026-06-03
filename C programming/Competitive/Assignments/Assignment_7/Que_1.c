//Question 1: Write a program which accepts a number from user and print that many stars and hashes on screen. (Input should be positive, if input is negative then convert it into positive and print the stars and hashes of that number)

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)   // Handle negative input
    {
        iNo = -iNo;
    }

    // Print stars
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }

    // Print hashes
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
