//Question 5: Write a program which accepts a number from user and print the difference between factorial of even numbers and factorial of odd numbers from that number. (Input should be positive, if input is negative then convert it into positive and print the difference between factorial of even numbers and factorial of odd numbers from that number)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;
    if(iNo < 0) iNo = -iNo;

    for(int i = 2; i <= iNo; i += 2)
    {
        iFact *= i;
    }
    return iFact;
}

int OddFactorial(int iNo)
{
    int iFact = 1;
    if(iNo < 0) iNo = -iNo;

    for(int i = 1; i <= iNo; i += 2)
    {
        iFact *= i;
    }
    return iFact;
}

int FactorialDiff(int iNo)
{
    return EvenFactorial(iNo) - OddFactorial(iNo);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference between Even and Odd Factorial of number is %d", iRet);

    return 0;
}
