//question 5: Write a program which accept N numbers from user and return product of all odd elements.

#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iProd = 1;
    int bFound = 0;   // flag to check if any odd element exists

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)   // odd check
        {
            iProd = iProd * Arr[iCnt];
            bFound = 1;
        }
    }

    if(bFound == 0)
    {
        return 0;   // no odd elements
    }
    return iProd;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    iRet = Product(p, iSize);

    printf("Product of odd elements is %d\n", iRet);

    free(p);
    return 0;
}
