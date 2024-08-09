#include <stdio.h>

int arrival_times[8] = {10 * 60 + 0, 11 * 60 + 52, 13 * 60 + 31, 15  * 60 + 0, 16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};
int departure_times[8] = {8 * 60 + 0, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 14 * 60 + 00, 15 * 60 + 45, 19 * 60 + 0, 21 * 60 + 45};

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int hours, minutes, minutes_to_midnight, departure_time, arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    minutes_to_midnight = hours * 60 + minutes;
    
    find_closest_flight(minutes_to_midnight, &departure_time, &arrival_time);


    printf("Closest departure time is in 24 hour time is %4d, arriving at %4d.", departure_time, arrival_time);

    
       
    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int i;
    
    for (i; i <  (int) sizeof(departure_time)/sizeof(departure_time[0]); i++)
    {
        if (desired_time < departure_times[i])
        {
            *departure_time = departure_times[i];
            *arrival_time = arrival_times[i];
        }
    }
}
