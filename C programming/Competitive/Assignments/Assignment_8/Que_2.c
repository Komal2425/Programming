//Question 2: Write a program which accepts width and height of rectangle from user and print the area of rectangle on screen.

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    return fWidth * fHeight;   // Logic
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is: %lf\n", dRet);

    return 0;
}
