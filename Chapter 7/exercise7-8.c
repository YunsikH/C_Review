#include <stdio.h>

int main(void)
{
    char ch;
    int hours, minutes, minutes_to_midnight;

    printf("Enter a time (H:M AM/PM): ");
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

    printf("Closest departure time is ");

    minutes_to_midnight = hours * 60 + minutes;

    if (minutes_to_midnight < (8 * 60))
        printf("8:00 a.m., arriving at 10:16 a.m.");
    else if (minutes_to_midnight < (9 * 60 + 43))
        printf("9:43 a.m., arriving at 11:52 a.m.");
    else if (minutes_to_midnight < (11 * 60 + 19))
        printf("11:19 a.m., arriving at 1:31 p.m.");
    else if (minutes_to_midnight < (12 * 60 + 47))
        printf("12:47 p.m., arriving at 3:00 p.m.");
    else if (minutes_to_midnight < (14 * 60))
        printf("2:00 p.m., arriving at 4:08 p.m.");
    else if (minutes_to_midnight < (15 * 60 + 45))
        printf("3:45 p.m., arriving at 5:55 p.m.");
    else if (minutes_to_midnight < (19 * 60))
        printf("7:00 p.m., arriving at 9:20 p.m.");
    else if (minutes_to_midnight < (21 * 60 + 45))
        printf("9:45 p.m., arriving at 11:58 p.m.");
       
    return 0;
}