#include <stdio.h>

int main(void)
{
    int month1, day1, year1, month2, day2, year2;
    
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    //finding the earlier date
    if (year1 < year2)
        printf("%d/%d/%02d is earlier than %d/%d/%02d", month1, day1, year1, month2, day2, year2);
    else if (year2 < year1)
        printf("%d/%d/%02d is earlier than %d/%d/%02d", month2, day2, year2, month1, day1, year1);
    else
        if (month1 < month2)
            printf("%d/%d/%02d is earlier than %d/%d/%02d", month1, day1, year1, month2, day2, year2);
        else if (month2 < month1)
            printf("%d/%d/%02d is earlier than %d/%d/%02d", month1, day1, year1, month2, day2, year2);
        else
            if (day1 < day2)
                printf("%d/%d/%02d is earlier than %d/%d/%02d", month1, day1, year1, month2, day2, year2);
            else if (day2 < day1)
                printf("%d/%d/%02d is earlier than %d/%d/%02d", month2, day2, year2, month1, day1, year1);
            else  
                printf("These are the same dates");

    return 0;
}