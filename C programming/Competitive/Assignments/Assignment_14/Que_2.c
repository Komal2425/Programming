//question 2: Write a program which accept N numbers from user and return difference between frequency of even and odd numbers.

#include<stdio.h>
#include<stdlib.h>

int FrequencyDiff(int Arr[], int iLength)
{
    int iCnt = 0, iEvenCnt = 0, iOddCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }
    return iEvenCnt - iOddCnt;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = FrequencyDiff(p, iSize);
    printf("Difference between even and odd frequency is: %d\n", iRet);

    free(p);
    return 0;
}
