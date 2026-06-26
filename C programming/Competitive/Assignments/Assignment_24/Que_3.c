/*
    Input : iROW = 3     iCOL = 5
    output : A A A A A
             B B B B B
             C C C C C

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    // Outer loop for rows
    for(i = 1; i <= iRow; i++)
    {
        // Character is determined by the current row number
        ch = 'A' + (i - 1);

        // Inner loop for columns
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
