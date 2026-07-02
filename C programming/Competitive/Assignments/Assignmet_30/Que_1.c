//  a program which displays ASCII table from 0 to 255 in tabular format with decimal, hexadecimal, octal and symbol representation.

#include <stdio.h>

void DisplayASCII()
{
    int i = 0;
    
    // Print table header
    printf("-----------------------------------------\n");
    printf("Dec\tHex\tOct\tSymbol\n");
    printf("-----------------------------------------\n");
    
    for(i = 0; i <= 255; i++)
    {
        // Filter out non-printable control characters for cleaner output
        if (i < 32 || i == 127) 
        {
            printf("%d\t0x%X\t%o\tNon-Printable\n", i, i, i);
        }
        else 
        {
            printf("%d\t0x%X\t%o\t%c\n", i, i, i, i);
        }
    }
    printf("-----------------------------------------\n");
}

int main()
{
    DisplayASCII();
    return 0;
}
