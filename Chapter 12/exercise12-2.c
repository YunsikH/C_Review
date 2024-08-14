#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LENGTH 100

int main(void)
{
    char message[LENGTH], ch;
    bool plndrme = true;
    int i, j = 0;

    printf("Enter a message: ");
    for (i = 0; i < LENGTH; i++) 
    {
        ch = getchar();
        if ((toupper(ch) >= 'A' && toupper(ch) <= 'Z') || (toupper(ch) >= '0' && toupper(ch) <= '9')) 
        {
            message[i] = ch;
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