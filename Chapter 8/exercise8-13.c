/*
    Rewrites someones first and last name into lastname first name intitial
    Assumes that names always start with a capital
    Uses array for lastname
*/
#include <stdio.h>
#include <ctype.h>

#define LAST_NAME_LENGTH 20

int main(void)
{
    char ch, initial, last_name[LAST_NAME_LENGTH];
    int i = 0;

    printf("Enter a name: ");
    
    //skips whitespace; see whitespace, do nothing, go to next in buffer
    while ((ch = getchar()) == ' ');

    initial = ch;
    
    //skips the rest of the first name
    while ((ch = getchar()) != ' ');

    //skips the space between first and last name
    while ((ch = getchar()) == ' ');
    
    while ((ch = getchar()) != '\n' && i != (int) sizeof(last_name)/sizeof(last_name[0]))
    {
        last_name[i] = ch;
        i++;
    }
    
    for (i = 0; i < (int) sizeof(last_name)/sizeof(last_name[0]) && last_name[i - 1] != '\n'; i++)
        printf("%c", last_name[i]);

    printf(", %c.", initial);

    return 0;
}