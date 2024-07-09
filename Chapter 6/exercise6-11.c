#include <stdio.h>

int main(void)
{
    //month2 day2 year2 is smallest
    int month1, day1, year1, running = 1, month2, day2, year2;
    
    while(running)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month1, &day1, &year1);
        
        if (month1 == 0 && day1 == 0 && year1 == 0)
        {
            running = 0;
        }
        else if (year1 < year2)
        {
            month2 = month1;
            day2 = day1;
            year2 = year1;
        }
        else if (year1 == year2)
        {
            if (month1 < month2)
            {    
                    month2 = month1;
                    day2 = day1;
                    year2 = year1;
            }
            else if (month1 == month2)
            {
                if (day1 < day2)
                {
                    month2 = month1;
                    day2 = day1;
                    year2 = year1;
                }
            }
        } 

    } 

    printf("%d/%d/%02d is the earliest date.", month2, day2, year2);  

    return 0;
}