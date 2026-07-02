// a program which accepts string from user and reverse that string in place.

#include <stdio.h>

void StrRevInPlace(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    if(str == NULL)
    {
        return;
    }

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^\n]s", arr);

    StrRevInPlace(arr);

    printf("Reversed string is: %s\n", arr);

    return 0;
}
