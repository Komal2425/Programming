//Question 3: Write a program which accepts distance in kilometre from user and convert it into meter. (Input should be positive, if input is negative then convert it into positive and print the distance in meter)   

#include<stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;   // Logic
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometre: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter: %d\n", iRet);

    return 0;
}
