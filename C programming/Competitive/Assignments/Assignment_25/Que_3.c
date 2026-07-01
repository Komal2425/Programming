/*
    Input  : iRow = 4, iCol = 4

    Output : a b c d
             1 2 3 4
             a b c d
             1 2 3 4

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            // If row number is odd, print alphabets
            if(i % 2 != 0)
            {
                printf("%c\t", 'a' + j - 1);
            }
            // If row number is even, print numbers
            else
            {
                printf("%d\t", j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
