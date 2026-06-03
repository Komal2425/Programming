//Question 4: Write a program which accepts a number from user and print its table. (Input should be positive, if input is negative then convert it into positive and print the table of that number)

#include<stdio.h>

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;   // convert negative to positive
    }

    for(int i = 1; i <= 10; i++)
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

    Table(iValue);

    return 0;
}
