#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LENGTH 100

int main(void)
{
    char message[LENGTH], ch, *p;
    bool plndrme = true;
    int i, j = 0;

    printf("Enter a message: ");
    for (p = &message[0]; p <= &message[LENGTH]; p++) 
    {
        *p = getchar();
        if ((toupper(*p) >= 'A' && toupper(*p) <= 'Z') || (toupper(*p) >= '0' && toupper(*p) <= '9')) 
        {
            p = *p;
        }
        else if (ch == '\n')
        {
            message[i] = ch;
            break;
        }
        else //if any character not a letter or a newline is encountered go back one space and ignore it.
            i--;
    }

    for (i--; i >= 0; i--) 
    {
        if (toupper(message[i]) != toupper(message[j]))
            plndrme = false;
        j++;
    }

    if (plndrme == true)
        printf("Palindrome.");
    else
        printf("Not a palindrome.");


    return 0;
}