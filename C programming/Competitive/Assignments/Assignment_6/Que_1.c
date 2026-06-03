//Question 1: Write a program which accepts a number from user and check whether it is small, medium or large. (Small < 50, Medium >= 50 and < 100, Large >= 100)

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo >= 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else if(iNo >= 100)
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
