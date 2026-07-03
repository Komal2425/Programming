// a program to copy the contents of one string into another string using a custom function StrCpyX.

#include <stdio.h>

// Function to copy contents of src string into dest string
void StrCpyX(const char *src, char *dest)
{
    // Check for null pointers (Filter/Guard clause)
    if (src == NULL || dest == NULL)
    {
        return;
    }

    // Copy character by character until the null terminator is reached
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    // Crucial step: Null-terminate the destination string
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30]; // Destination buffer

    // Call the custom string copy function
    StrCpyX(arr, brr);

    // Print the copied result
    printf("%s\n", brr); // Output: Marvellous Multi OS

    return 0;
}
