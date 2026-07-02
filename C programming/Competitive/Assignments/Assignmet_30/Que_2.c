// a program which accepts character from user and display its case by converting it to opposite case. 

#include <stdio.h>

void Display(char ch)
{
    // If character is an uppercase letter, convert to lowercase
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Output : %c\n", ch + 32);
    }
    // If character is a lowercase letter, convert to uppercase
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Output : %c\n", ch - 32);
    }
    // In all other cases, display it as it is
    else
    {
        printf("Output : %c\n", ch);
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character : ");
    scanf("%c", &cValue);
    
    Display(cValue);
    
    return 0;
}
