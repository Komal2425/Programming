// a program to copy only capital characters from one string into another string using a custom function StrCpyCap.

#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
    // Filter for null pointers can go here
    if (src == NULL || dest == NULL) return;

    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0'; // Null-terminate destination
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30]; // Empty string

    StrCpyCap(arr, brr);
    printf("%s\n", brr); // Output: MMOS

    return 0;
}
