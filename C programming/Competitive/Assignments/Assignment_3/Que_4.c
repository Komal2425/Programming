//question 4: Accept character from user and convert case of that character.

#include <stdio.h>

void DisplayConvert(char cValue)
{
    // Check if character is lowercase
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32); // Convert to Uppercase
    }
    // Check if character is uppercase
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32); // Convert to Lowercase
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
