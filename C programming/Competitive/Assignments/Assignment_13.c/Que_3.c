//question 3: Accept N numbers from user and display all such elements which are even and divisible by 5.

#include <stdio.h>
#include <stdlib.h>

void DisplayEvenDivisibleByFive(int Arr[], int iLength)
{
    int iCnt = 0;
    printf("Elements which are even and divisible by 5:\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2 == 0) && (Arr[iCnt] % 5 == 0))
        {
            printf("%d ", Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    DisplayEvenDivisibleByFive(p, iSize);

    free(p);
    return 0;
}
