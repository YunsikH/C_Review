#include <stdio.h>
#include <ctype.h>

#define SENTENCE_LENGTH 100

int main (void)
{
    char ch, terminating, sentence[SENTENCE_LENGTH];
    int i, j, prev;

    for ( i = 0; i < (int) sizeof(sentence)/sizeof(sentence[0]) && sentence[i - 1] != '\n'; i++)
    {
        ch = getchar();
                
        if (ch == '.' || ch == '?' || ch == '!')
        {
            terminating = ch;
            prev = i;
        }
        else
            sentence[i] = ch;
    }
    
    
    
    for ( i = 0; i < (int) sizeof(sentence)/sizeof(sentence[0]) && sentence[i - 1] != '\n'; i++)
    {
        if (tolower(sentence[i])  'a' || tolower(sentence[i]) == '?' || tolower(sentence[i])i] == '!')
        {
            terminating = ch;
            prev = i;
        }
        else
            sentence[i] = ch;
    }

    return 0;
}