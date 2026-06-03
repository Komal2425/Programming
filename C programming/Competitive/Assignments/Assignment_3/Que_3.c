//question 3: Accept number from user and print even factors of that number.

#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo; // Handle negative numbers
    }

    // Loop from 1 up to half of the number to find factors
    for(i = 1; i <= iNo / 2; i++) 
    {
        // Condition: i is a factor AND i is even
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
