//question 5: Write a program which accept N numbers from user and return sum of digits of each number.

#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iNo = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;

        while(iNo != 0)
        {
            iSum += iNo % 10;   // Add last digit
            iNo = iNo / 10;     // Remove last digit
        }

        printf("%d ", iSum);    // Print sum of digits for each number
    }
    printf("\n");
    return 0;
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
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);
    return 0;
}
