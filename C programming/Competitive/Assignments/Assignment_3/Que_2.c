//question 2: Accept number from user and print all even factors of that number.

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    // Handle negative numbers by converting to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic: Iterate from 1 to half of the number
    for(i = 1; i <= (iNo / 2); i++)
    {
        // Check if 'i' is a factor AND if 'i' is even
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}
