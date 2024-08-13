#include <stdio.h>

#define LENGTH 100

int main(void)
{
    char message[LENGTH], ch;
    int i;

    printf("Enter a message: ");
    for (i = 0; i < LENGTH; i++) 
    {
        message[i] = getchar();
        if (message[i] == '\n')
        break;
    }
    
    printf("Reversal is: ");
    for (i--; i >= 0; i--)
        putchar(message[i]);
    putchar('\n');


    return 0;
}