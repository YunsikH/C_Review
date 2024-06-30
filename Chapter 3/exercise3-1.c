#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter a date: ");
    scanf("%d/%d/%d",  &month, &day, &year);

    printf("You entered the date: %d/%d/%d", year, month, day);
    
    return 0;
}