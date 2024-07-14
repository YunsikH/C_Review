#include <stdio.h>
#include <ctype.h>

/*
    Rewrites someones first and last name into lastname first name intitial
    Assumes that names always start with a capital
*/

int main(void)
{
    char ch, initial;

    printf("Enter a name: ");
    
    //skips whitespace; see whitespace, do nothing, go to next in buffer
    while ((ch = getchar()) == ' ');

    initial = ch;

    while (ch = getchar() != ' ');

    while ((ch = getchar()) == ' ');
    
    putchar(ch);

    while ((ch = getchar()) != '\n')
        putchar(ch);

    printf(", %c.", initial);

    return 0;
}