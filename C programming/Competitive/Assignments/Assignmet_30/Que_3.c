/*    a program which accepts character from user and display all the characters
      from that character till 'Z, if it is capital and in case of small character 
      display all the characters in reverse order till 'a'. In other cases return directly.
 */

#include <stdio.h>

void Display(char ch)
{
    // If it is capital, display characters from ch till 'Z'
    if (ch >= 'A' && ch <= 'Z')
    {
        while (ch <= 'Z')
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    // If it is small, print characters in reverse order till 'a'
    else if (ch >= 'a' && ch <= 'z')
    {
        while (ch >= 'a')
        {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }
    // In other cases (digits, special symbols), return directly
    else
    {
        return;
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
