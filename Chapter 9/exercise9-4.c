#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main (void)
{
    char ch;
    int i, letter_count_one[26] = {0}, letter_count_two[26] = {0};
    bool not_anagram = false;

    printf("Enter first word: ");
    
    while ((ch = getchar()) != '\n')
    {
        if (tolower(ch) >= 'a' && tolower(ch) <= 'z') 
        {
            letter_count_one[ch -'a']++;
        }
    }
    
    printf("Enter second word: ");
    
    while ((ch = getchar()) != '\n')
    {
        if (tolower(ch) >= 'a' && tolower(ch) <= 'z') 
        {
            letter_count_one[ch -'a']--;
        }
    }

    for ( i = 0; i < (int) sizeof(letter_count_one)/sizeof(letter_count_one[0]); i++)
    {
        if (letter_count_one[i] > 0)
            not_anagram = true;
    }

    if (not_anagram == true)
        printf("The words are not anagrams.");
    else 
        printf("The words are anagrams.");

    return 0;
}

void read_word(int counts[26])
{

}

bool equal_array(int counts1[26], int counts2[26])
{

    return 1;
}