#include <stdio.h>

#define PM 720

int main(void)
{
    int hours, minutes, minutes_to_midnight, i;
    int departure[] = {0, 480, 583, 679, 12 * 60 + 47, 14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45}, 
        arrival[] = {0, 10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60, 16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 23 * 60  + 58};

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);


    minutes_to_midnight = hours * 60 + minutes;

    for (i = 1; i < (int) sizeof(departure)/sizeof(departure[0]); i++)
    {
        if (minutes_to_midnight < departure[i] && minutes_to_midnight > departure[i - 1])
        {
            printf("Closest departure time is %02d:%02d", departure[i] / 60, departure[i] % 60);
            if (minutes_to_midnight >= PM)
                printf(" p.m.");
            else
                printf(" a.m.");
            
            printf(", arriving at %02d:%02d", arrival[i] / 60, arrival[i] % 60);
            if (arrival[i] >= PM)
                printf(" p.m.");
            else
                printf(" a.m.");
        }
    }
    /*
    if (minutes_to_midnight < departure[0])
        printf("8:00 a.m., arriving at 10:16 a.m.");
    else if (minutes_to_midnight < departure[1])
        printf("9:43 a.m., arriving at 11:52 a.m.");
    else if (minutes_to_midnight < departure[2])
        printf("11:19 a.m., arriving at 1:31 p.m.");
    else if (minutes_to_midnight < departure[3])
        printf("12:47 p.m., arriving at 3:00 p.m.");
    else if (minutes_to_midnight < departure[4])
        printf("2:00 p.m., arriving at 4:08 p.m.");
    else if (minutes_to_midnight < departure[5])
        printf("3:45 p.m., arriving at 5:55 p.m.");
    else if (minutes_to_midnight < departure[6])
        printf("7:00 p.m., arriving at 9:20 p.m.");
    else if (minutes_to_midnight , departure[7])
        printf("9:45 p.m., arriving at 11:58 p.m.");
    */
       
    return 0;
}