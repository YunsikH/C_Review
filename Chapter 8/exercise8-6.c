#include <stdio.h>
#include <ctype.h>

#define LENGTH 100

int main(void)
{
    /*
    Biff Filter
    take in character input into a character aray
    convert the message into biff speak
    for array going through the char array, and changing each letter, then appending 10 exclamation marks    
    */
    int i, j;
    char sentence[LENGTH], ch;

    printf("Enter Message: ");

    for (i = 0; i < LENGTH; i++)
    {
        scanf("%c", &sentence[i]);

        if (sentence[i] == '\n')
            break;
    }
    
    printf("In B1FF-speak: ");
    
    for (i = 0; i < LENGTH; i++)
    {
        if (sentence[i] == '\n')
            break;
        else
        {
            switch (sentence[i])
            {
                case 'A': case 'a':
                    putchar('4');
                    break;
                /*
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
                    */
                default:
                    printf("%c", toupper(sentence[i]));
                    break;
            }
        }
    }

    printf("!!!!!!!!!!");

    return 0;
}