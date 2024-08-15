/***
 * simplify by using the array name as a pointer
 * 
 */
#include <stdio.h>

#define LENGTH 100

int main(void)
{
    char message[LENGTH], *p;

    printf("Enter a message: ");
    for (p = message; p < message + LENGTH; p++) 
    {
        *p = getchar();
        if (*p == '\n')
        break;
    }
    
    printf("Reversal is: ");
    for (p--; p >= message; p--)
        putchar(*p);
    putchar('\n');

    return 0;
}