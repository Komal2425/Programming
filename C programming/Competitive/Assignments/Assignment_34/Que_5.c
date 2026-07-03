// a program to concatenate two strings using a custom function StrCatX.

#include <stdio.h>

void StrCatX(char *src, char *dest)
{
    // Filter / Check for null pointers if necessary

    // Traverse first string till end
    while(*src != '\0')
    {
        src++;
    }

    // Copy contents of destination to the end of source
    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    
    // Add null terminator to the end of the concatenated string
    *src = '\0';
}

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";

    StrCatX(arr, brr);

    printf("%s\n", arr); // Output: Marvellous Infosystems Logic Building

    return 0;
}
