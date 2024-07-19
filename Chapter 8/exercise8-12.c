/*
    Uses getchar to go by each char in the string
    ctype.h is for toupper() function (lowercase converted to uppercase)
*/
#include <stdio.h>
#include <ctype.h>

#define ALPHABET_LENGTH 26
#define ASCII_OFFSET 65

int main(void)
{
    char ch;
    int score = 0, letter_value[ALPHABET_LENGTH] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

    printf("Enter a word: ");
    while((ch = getchar()) != '\n') //IMPORTANT THAT I USE (ch = getchar()) != '\n' EXPLICITLY AND NOT ch = getchar() != '\n'
    {
        score += letter_value[(int) toupper(ch) - ASCII_OFFSET];
    }

    printf("Scrabble value: %d", score);

    return 0;
}