#include <stdio.h>

#define LENGTH 100

int main(void)
{
    char message[LENGTH], *p;

    printf("Enter a message: ");
    for (p = &message[0]; p <= &message[LENGTH]; p++) 
    {
        *p = getchar();
        if (*p == '\n')
        break;
    }
    
    printf("Reversal is: ");
    for (p--; p >= &message[0]; p--)
        putchar(*p);
    putchar('\n');


    return 0;
}