#include <stdio.h>

#define SENTENCE_LENGTH 100

int main (void)
{
    char ch, terminating, sentence[SENTENCE_LENGTH];
    int i, j, prev;

    for ( i= 0; i < (int) sizeof(sentence)/sizeof(sentence[0]) && sentence[i - 1] != '\n'; i++)
    {
        ch = getchar();
                
        if (ch == '.' || ch == '?' || ch == '!')
        {
            terminating = ch;
        }
        else
            sentence[i] = ch;
    }
    
    //prev = (int) sizeof(sentence)/sizeof(sentence[0]);
    
    for (i = (int) sizeof(sentence)/sizeof(sentence[0]) - 1; i >= 0; i--)
    {
        
        if (sentence[i] == ' ')
        {
            printf("lomao");
        }
    }

    return 0;
}