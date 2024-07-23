#include <stdio.h>
#include <ctype.h>

#define SENTENCE_LENGTH 80
//#define TERM_CHAR_NEWLINE_SIZE 2 //The terminating character and the newline at the end of sentence char array

int main (void)
{
    char ch, terminating, sentence[SENTENCE_LENGTH];
    int i, j, no_of_characters, shift;

    printf("Enter message to be encrypted: ");
    for ( i = 0; i < (int) sizeof(sentence)/sizeof(sentence[0]); i++)
    {
        sentence[i] = getchar();
        if (sentence[i] == '\n')
        {
            break;
        }
    }
    
    no_of_characters = i;
    
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    for ( i = 0; i < (int) sizeof(sentence)/sizeof(sentence[0]) && sentence[i - 1] != '\n'; i++)
    {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') 
        {
            sentence[i] = ((sentence[i] - 'a') + shift) % 26 + 'a';
        }
        else if (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            sentence[i] = ((sentence[i] - 'A') + shift) % 26 + 'A';
        }
    }

    printf("Encrypted message: ");
    
    for ( i = 0; i < no_of_characters; i++)
    {
            printf("%c", sentence[i]);
    }

    return 0;
}