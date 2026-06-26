/*INPUT :  iRow = 4       iCol = 4
  
output: A B C D
        a b c d
        A B C D
        a b c d
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
        // Inner loop for columns
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                // Odd rows: Uppercase letters
                ch = 'A' + (j - 1);
                printf("%c\t", ch);
            }
            else
            {
                // Even rows: Lowercase letters
                ch = 'a' + (j - 1);
                printf("%c\t", ch);
            }
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
