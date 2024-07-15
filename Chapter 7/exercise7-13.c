#include <stdio.h>

int main(void)
{
    char ch;
    float average = 0.0f, number_of_words = 0.0f, word_length = 0.0f;

    printf("Enter a sentence: ");

    //Remove whitespace at the beginning
    //while ((ch = getchar()) == ' ');
        
    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
        case ' ': case '.':
            number_of_words++;
            average +=  word_length;
            word_length = 0;
            //adding something here to remove additional whitespace
            break;
        default:
            word_length++;     
            break;
        }
    }
 
    printf("Average word length: %.1f", average / number_of_words);

    return 0;
}