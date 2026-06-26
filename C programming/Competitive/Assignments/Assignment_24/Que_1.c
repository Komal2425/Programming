/*
  Input: iRow = 4  iCol=4
  Output: A B C D
          A B C D
          A B C D
          A B C D
          
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    // Loop for rows
    for(i = 1; i <= iRow; i++)
    {
        ch = 'A'; // Reset character for each row
        
        // Loop for columns
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
            ch++; // Move to next alphabet
        }
        printf("\n"); // Newline after each row
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows and Columns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}



