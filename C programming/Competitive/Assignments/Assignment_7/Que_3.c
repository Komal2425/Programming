//Question 3: Write a program which accepts a number from user and print the factorial of even numbers from that number. (Input should be positive, if input is negative then convert it into positive and print the factorial of even numbers from that number)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0)   // Handle negative input
    {
        iNo = -iNo;
    }

    for(int i = iNo; i >= 2; i--)
    {
        if(i % 2 == 0)   // Only even numbers
        {
            iFact = iFact * i;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial is %d\n", iRet);

    return 0;
}
