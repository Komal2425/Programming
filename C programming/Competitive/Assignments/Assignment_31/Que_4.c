// a program which accepts string from user and check whether it contains vowels or not.

#include <stdio.h>

// Defining custom BOOL data type to match the template requirements
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    // Loop through the string until the null character is reached
    while(*str != '\0')
    {
        // Check if current character matches any lowercase or uppercase vowel
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return TRUE; // Vowel found, exit immediately
        }
        str++; // Move to next character
    }

    return FALSE; // No vowels found after checking entire string
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string");
    scanf("%[^\n]s", arr);

    bRet = ChkVowel(arr);
    
    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}
