#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LENGTH 100

int main(void)
{
    char message[LENGTH], ch;
    bool plndrme = true;
    int i, j;

    printf("Enter a message: ");
    for (i = 0; i < LENGTH; i++) 
    {
        ch = getchar();
        if (toupper(ch) <= 'A' && toupper(ch) >= 'Z')
            message[i] = ch;
        else if (ch == '\n')
        {
            message[i] = ch;
            break;
        }
    }

    j = 0;

    for (i--; i >= 0; i--) 
    {
        if (message[i] != message[j])
            plndrme = false;
        j++;
    }

    if (plndrme == true)
        printf("Palindrome.");
    else
        printf("Not a palindrome.");


    return 0;
}