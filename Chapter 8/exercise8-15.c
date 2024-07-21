#include <stdio.h>

#define SENTENCE_LENGTH 80

int main(void)
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

    return 0;
}