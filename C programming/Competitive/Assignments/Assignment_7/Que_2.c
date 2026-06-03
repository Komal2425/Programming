//Question 2: Write a program which accepts amount in USD and convert it into INR. (Consider 1 USD = 70 INR)

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAns = 0;
    iAns = iNo * 70;   // Conversion
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter amount in USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR: %d\n", iRet);

    return 0;
}
