#include <stdio.h>
#include <ctype.h>

#define PHONE_NUMBER_LENGTH 15
int main(void)
{
    char ch, phone_number[PHONE_NUMBER_LENGTH];
    int i = 0;

    printf("Enter Phone Number: ");

    for (i = 0; i < (int) sizeof(phone_number)/sizeof(phone_number[0]) && phone_number[i - 1] != '\n'; i++)
    {
        phone_number[i] = getchar();
    }

    for (i = 0; i < (int) sizeof(phone_number)/sizeof(phone_number[0]) && phone_number[i - 1] != '\n'; i++)
    {
        switch(toupper(phone_number[i]))
        {
            case 'A': case 'B': case 'C':
                printf("2");
                break;
            case 'D': case 'E': case 'F':
                printf("3");
                break;
            case 'G': case 'H': case 'I':
                printf("4");
                break;
            case 'J': case 'K': case 'L':
                printf("5");
                break;
            case 'M': case 'N': case 'O':
                printf("6");
                break;
            case 'P': case 'Q': case 'R': case 'S':
                printf("7");
                break;
             case 'T': case 'U': case 'V':
                printf("8");
                break;
             case 'W': case 'X': case 'Y': case 'Z':
            printf("9");
                break;
            default:
                putchar(phone_number[i]);
                break;
        }
    }

    return 0;
}