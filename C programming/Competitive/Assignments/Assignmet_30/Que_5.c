// a program which accepts character from user and display its ASCII representation in decimal, octal and hexadecimal format.

#include <stdio.h>

void Display(char ch)
{
    // Print ASCII representation using format specifiers
    printf("Decimal\t\t%d\n", ch);
    printf("Octal\t\t%04o\n", ch);         // %04o pads the octal output to 4 digits
    printf("Hexadecimal\t0X%X\n", ch);       // %X prints hex in uppercase letters
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character : ");
    scanf("%c", &cValue);
    
    Display(cValue);
    
    return 0;
}
