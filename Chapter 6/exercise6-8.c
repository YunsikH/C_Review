#include <stdio.h>

#define DAYS_IN_WEEK 7

int main(void)
{
    int days, starting_day, i;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    //print the empty spaces
    for (i = 1; i < starting_day; i++)
    {
        printf("   ");
    }

    for (i = 1; i <= days; i++)
    {
        printf("%3d", i);
        //finds out what the last day will be based on the starting day that shifts the calendar that many days minus one 
        if ((i + starting_day - 1) % DAYS_IN_WEEK == 0)
            printf("\n");        
    }

    return 0;
}