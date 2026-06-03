//Question 4: Write a program which accepts temperature in Fahrenheit from user and convert it into Celsius. (Input should be positive, if input is negative then convert it into positive and print the temperature in Celsius)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * (5.0 / 9.0);   // Logic
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius: %lf\n", dRet);

    return 0;
}
