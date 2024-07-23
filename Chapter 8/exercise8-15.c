#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main (void)
{
    char ch;
    int i, letter_count[26] = {0};
    bool not_anagram = false;

    printf("Enter first word: ");
    
    while ((ch = getchar()) != '\n')
    {
        if (tolower(ch) >= 'a' && tolower(ch) <= 'z') 
        {
            letter_count[ch -'a']++;
        }
    }
    
    printf("Enter second word: ");
    
    while ((ch = getchar()) != '\n')
    {
        if (tolower(ch) >= 'a' && tolower(ch) <= 'z') 
        {
            letter_count[ch -'a']--;
        }
    }

    for ( i = 0; i < (int) sizeof(letter_count)/sizeof(letter_count[0]); i++)
    {
        if (letter_count[i] > 0)
            not_anagram = true;
    }

    if (not_anagram == true)
        printf("The words are not anagrams.");
    else 
        printf("The words are anagrams.");

    return 0;
}