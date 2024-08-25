#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LENGTH 100

int main(void)
{
    char message[LENGTH], ch, *p, *i_p;
    bool plndrme = true;
    //int i, j = 0;

    printf("Enter a message: ");
    for (p = message; p < message + LENGTH; p++) 
    {
        ch = getchar();
        if ((toupper(ch) >= 'A' && toupper(ch) <= 'Z') || (toupper(ch) >= '0' && toupper(ch) <= '9')) 
        {
            *p = ch;
        }
        else if (ch == '\n')
        {
            *p = ch;
            break;
        }
        else //if any character not a letter or a newline is encountered go back one space and ignore it.
            p--;
    }

    i_p = &message[0];
    for (p--; p > message; p--)
    {
        if (toupper(*p) != toupper(*i_p))
            plndrme = false;
        i_p++;
    }

    if (plndrme == true)
        printf("Palindrome.");
    else
        printf("Not a palindrome.");

    return 0;
}