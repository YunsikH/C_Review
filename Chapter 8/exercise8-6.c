#include <stdio.h>
#include <ctype.h>

#define LENGTH 5

int main(void)
{
    /*
    Biff Filter
    take in character input into a character aray
    convert the message into biff speak
    for array going through the char array, and changing each letter, then appending 10 exclamation marks    
    */
    int i;
    char sentence[LENGTH];

    printf("Enter Message: ");

    /*
    for (i = 0; i < LENGTH; i++)
    {
        if(sentence[i] == '\n')
        {
            break;
        }
        else
        {
            scanf("%c", &sentence[0]);
        }
    }
    */

    //more compact way of saving a message to  sentence
    while((ch = getchar()) != '\n' && i < LENGTH)
        sentence[i++] = ch;
 
    
    printf("In B1FF-speak: ");
    /*
    for (i = 0; i < ((int) sizeof(sentence)/sizeof(sentence[0])); i++)
    {
        if (sentence[i] == '\n')
            break;
        else
        {
            switch (toupper(sentence[i]))
            {
                case 'A': case 'a':
                    putchar('4');
                    break;
                case 'B':
                    putchar('8');
                    break;
                case 'E':
                    putchar('3');
                    break;
                case 'I':
                    putchar('1');
                    break;
                case 'O':
                    putchar('0');
                    break;
                case 'S':
                    putchar('5');
                    break;
                default:
                    putchar(toupper(sentence[i]));
                    //printf("%c", toupper(sentence[i]));
                    break;
            }
        }

    }
    */
    printf("!!!!!!!!!!");
    printf("%s End", sentence);

    return 0;
}