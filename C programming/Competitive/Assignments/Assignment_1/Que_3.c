//question 3 : program to display 5 to 1 numbers

#include <stdio.h>

void Display()
{
    int i = 0;
    i = 5;                  // initialize i to 5
    while(i >= 1)           // condition: run until i reaches 1
    {
        printf("%d\n", i);  // print current value
        i--;                // decrement
    }
}
int main()
{
    Display();
    return 0;
}
