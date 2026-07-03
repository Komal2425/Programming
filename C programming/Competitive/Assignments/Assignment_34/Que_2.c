// a program to copy N characters of one string into another string using a custom function StrNCpyX.

#include <stdio.h>

// Function to copy N characters of src string into dest string
void StrNCpyX(const char *src, char *dest, int iCnt)
{
    // Filter to handle empty pointers or invalid count
    if (src == NULL || dest == NULL || iCnt <= 0)
    {
        return;
    }

    // Copy until string ends OR requested count reaches 0
    while ((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }

    // Null-terminate the destination string
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30]; // Empty destination string

    // Copy first 10 characters
    StrNCpyX(arr, brr, 10);

    // Print the result (Fixed the typo 'prnitf' to 'printf')
    printf("%s\n", brr); // Output: Marvellous

    return 0;
}
