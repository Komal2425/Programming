//question 1:Accept number from user and return multiplication of all its factors.

#include<stdio.h>

int MultFact(int iNo) 
{
    int iCnt = 0;
    int iMult = 1;
    int bHasFactor = 0;

    // Iterate from 1 to iNo/2 to find proper factors

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++) 
    {
        if((iNo % iCnt) == 0) 
        {
            iMult = iMult * iCnt;
            bHasFactor = 1;
        }
    }

    return bHasFactor ? iMult : 0;
}

int main()
 {
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d\n", iRet);

    return 0;
}
