#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int hours, minutes, minutes_to_midnight, departure_time, arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    minutes_to_midnight = hours * 60 + minutes;
    
    find_closest_flight(minutes_to_midnight, &departure_time, &arrival_time);
    printf("Closest departure time is %2d:%2d");

    
       
    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int desired_time; 
    if (desired_time < (8 * 60))
    {
        *departure_time = 8 * 60;
        *arrival_time = 11 * 60 + 52;
    }
    else if (desired_time < (9 * 60 + 43))
    {
        *departure_time = 9 * 60 + 43;
        *arrival_time = 11 * 60 + 52;
    }
    else if (desired_time < (11 * 60 + 19))
        printf("11:19 a.m., arriving at 1:31 p.m.");
    else if (desired_time < (12 * 60 + 47))
        printf("12:47 p.m., arriving at 3:00 p.m.");
    else if (desired_time < (14 * 60))
        printf("2:00 p.m., arriving at 4:08 p.m.");
    else if (desired_time < (15 * 60 + 45))
        printf("3:45 p.m., arriving at 5:55 p.m.");
    else if (desired_time < (19 * 60))
        printf("7:00 p.m., arriving at 9:20 p.m.");
    else if (desired_time < (21 * 60 + 45))
        printf("9:45 p.m., arriving at 11:58 p.m.");
}
