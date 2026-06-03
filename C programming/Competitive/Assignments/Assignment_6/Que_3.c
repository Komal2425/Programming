//Question 3: Write a program which accepts a number from user and return its factorial. (Input should be positive, if input is negative then convert it into positive and return the factorial of that number)

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;   // convert negative to positive
    }

    for(int i = iNo; i >= 1; i--)
    {
        iFact = iFact * i;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n", iRet);

    return 0;
}
