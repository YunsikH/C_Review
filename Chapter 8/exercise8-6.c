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
    for (i = 0; i < ((int) sizeof(sentence)/sizeof(sentence[0])); i++)
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
    
    printf("In B1FF-speak: ");
    /*
    for (i = 0; i < ((int) sizeof(sentence)/sizeof(sentence[0])); i++)
    {
        switch(sentence[i])
        {
            case 'A': case 'a':
            printf("4");
            break;
            case 'B': case 'b':
            printf("8");
            break;
            case 'E': case 'e':
            printf("3");
            break;
            case 'I': case 'i':
            printf("1");
            break;
            case 'O': case 'o':
            printf("0");
            break;
            case 'S': case 's':
            printf("5");
            break;
            case '\n':
            break;
            default:
            //printf("%c", sentence[i]);
            break;
        }

    }
    */
    printf("!!!!!!!!!!");
    printf("%s End", sentence);

    return 0;
}