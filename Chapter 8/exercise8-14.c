#include <stdio.h>
#include <ctype.h>

#define SENTENCE_LENGTH 100
#define TERM_CHAR_NEWLINE_SIZE 2 //The terminating character and the newline at the end of sentence char array

int main (void)
{
    char ch, terminating, sentence[SENTENCE_LENGTH];
    int i, j, no_of_characters;

    printf("Enter a sentence: ");

    for ( i = 0; i < (int) sizeof(sentence)/sizeof(sentence[0]) && sentence[i - 1] != '\n'; i++)
    {
        sentence[i] = ch = getchar();
                
        if (ch == '.' || ch == '?' || ch == '!')
        {
            terminating = sentence[i];
        }
    }
    
    no_of_characters = i - TERM_CHAR_NEWLINE_SIZE;
    
    printf("Reversal of sentence: ");
    for ( i = no_of_characters; i >= -1; i--)
    {
        if (sentence[i] == ' ' || i == -1)
        {
            for (j = i + 1; j < no_of_characters; j++)
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