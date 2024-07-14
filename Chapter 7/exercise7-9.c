#include <stdio.h>
/*
    Converts 12 hour time to 24 hour time
    Uses getchar
*/

int main(void)
{
    char ch;
    int hours, minutes, minutes_to_midnight;

    printf("Enter a 12 hour time (H:M AM/PM): ");
    scanf("%d:%d", &hours, &minutes);

    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
            case 'a': case 'A':
                if(hours == 12)
                {
                    hours -= 12;
                }
                break;
            case 'p': case 'P':
                if(hours != 12)
                {
                    hours += 12;    
                }
                break;
            default:
                break;
        }
    }

    printf("Equivalent 24 hour time: %02d:%02d", hours, minutes);

    return 0;
}