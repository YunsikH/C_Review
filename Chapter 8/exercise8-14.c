#include <stdio.h>
#include <ctype.h>

#define SENTENCE_LENGTH 100

int main (void)
{
    char ch, terminating, sentence[SENTENCE_LENGTH];
    int i, j, no_of_characters, count;

    for ( i = 0; i < (int) sizeof(sentence)/sizeof(sentence[0]) && sentence[i - 1] != '\n'; i++)
    {
        sentence[i] = ch = getchar();
                
        if (ch == '.' || ch == '?' || ch == '!')
        {
            terminating = sentence[i];
        }
        
        no_of_characters = i;
    }
    
    no_of_characters-1;
    for ( i = no_of_characters - 1; i >= -1; i--)
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