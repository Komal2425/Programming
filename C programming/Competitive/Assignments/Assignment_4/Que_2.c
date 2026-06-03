//question 2:Accept number from user and display factors in reverse order.

#include<stdio.h>

void FactRev(int iNo)
 {
    int iCnt = 0;

    // Iterate backwards from iNo/2 down to 1

    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--) 
    {
        if((iNo % iCnt) == 0)
         {
            printf("%d ", iCnt);
        }
    }

    printf("\n");
}

int main() 
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}
