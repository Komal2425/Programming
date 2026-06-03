//Question 5: Write a program which accepts a number from user and print its table in reverse order. (Input should be positive, if input is negative then convert it into positive and print the table of that number in reverse order)

#include<stdio.h>

void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;   // convert negative to positive
    }

    for(int i = 10; i >= 1; i--)
    {
        printf("%d ", iNo * i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
