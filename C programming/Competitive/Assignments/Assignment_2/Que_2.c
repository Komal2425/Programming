//Question 2: print * using decrement

#include<stdio.h>

void Display(int iNo)
{
    // Updater: loop until iNo becomes 0
    while( iNo > 0 )
    {
        printf("* ");
        iNo--;   // decrement value
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
