//Question 5: Write a program which accepts area in square feet from user and convert it into square meter. (Input should be positive, if input is negative then convert it into positive and print the area in square meter)

#include<stdio.h>

double SquareMeter(int ivalue)
{
    return ivalue * 0.0929;   // Logic
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter: %lf\n", dRet);

    return 0;
}
