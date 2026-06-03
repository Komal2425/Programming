//question 1:Accept number from user and print that number of even numbers on screen.

#include <stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    // Logic: Loop runs iNo times, printing the next multiple of 2
    for(int i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}

