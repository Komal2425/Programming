//question 4: Accept N numbers from user and display all such elements which are divisible by 3 and 5.

#include <stdio.h>
#include <stdlib.h>

void DisplayDivisibleBy3And5(int Arr[], int iLength)
{
    int iCnt = 0;
    printf("Elements divisible by 3 and 5 are:\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 3 == 0) && (Arr[iCnt] % 5 == 0))
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

    DisplayDivisibleBy3And5(p, iSize);

    free(p);
    return 0;
}
