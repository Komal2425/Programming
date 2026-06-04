//question 2: Write a program which accept N numbers from user and return the smallest number.

#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0];   // Assume first element is min
    int iCnt = 0;

    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];   // Update min if current element is smaller
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    iRet = Minimum(p, iSize);

    printf("Smallest Number is %d\n", iRet);

    free(p);
    return 0;
}
