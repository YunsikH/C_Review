#include <stdio.h>
#include <ctype.h>

#define SENTENCE_LENGTH 100
#define TERM_CHAR_NEWLINE_SIZE 2 //The terminating character and the newline at the end of sentence char array

int main (void)
{
    char ch, terminating, sentence[SENTENCE_LENGTH], *p, *q;
    int i, j, no_of_characters;

    printf("Enter a sentence: ");

    for ( p = sentence; p < sentence + SENTENCE_LENGTH && *--p != '\n'; p++)
    {
        *p = ch = getchar();
                
        if (ch == '.' || ch == '?' || ch == '!')
        {
            terminating = *p;
        }
    }
    
    //no_of_characters = i - TERM_CHAR_NEWLINE_SIZE;
    
    printf("Reversal of sentence: ");
    for ( p-= no_of_characters; p >= -1;p--)
    {
        if (*p == ' ' || *p == -1)
        {
            for (q = p + 1; q < no_of_characters; q++)
            {
                printf("%c", sentence[j]);
            }

            if(i == -1)
                putchar(terminating);
            else
                putchar(' ');

            no_of_characters = i;
        }
    }

    return 0;
}