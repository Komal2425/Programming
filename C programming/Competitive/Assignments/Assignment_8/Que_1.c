//Question 1: Write a program which accepts radius of circle from user and print the area of circle on screen. (Consider value of PI as 3.14)

#include<stdio.h>

double CircleArea(float fRadius)
{
    return 3.14 * fRadius * fRadius;   // Logic
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %lf\n", dRet);

    return 0;
}
