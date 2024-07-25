#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define ALPHABET_LENGTH 26

void read_word(int counts[ALPHABET_LENGTH]);
bool equal_array(int counts1[ALPHABET_LENGTH], int counts2[ALPHABET_LENGTH]);

int main (void)
{
    int letter_count_one[ALPHABET_LENGTH] = {0}, letter_count_two[ALPHABET_LENGTH] = {0};
    bool not_anagram;

    printf("Enter first word: ");
    
    read_word(letter_count_one);
    
    printf("Enter second word: ");
    
    read_word(letter_count_two);

    not_anagram = equal_array(letter_count_one, letter_count_two);

    if (not_anagram == true)
        printf("The words are not anagrams.");
    else 
        printf("The words are anagrams.");

    return 0;
}

void read_word(int counts[ALPHABET_LENGTH])
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (tolower(ch) >= 'a' && tolower(ch) <= 'z') 
        {
            counts[ch -'a']++;
        }
    }
}

bool equal_array(int counts1[ALPHABET_LENGTH], int counts2[ALPHABET_LENGTH])
{
    int i;
    bool not_anagram = false;
    
    for (i = 0; i < ALPHABET_LENGTH; i++)
        {
            if (counts1[i] != counts2[i])
                not_anagram = true;
        }
    
    return not_anagram;
}