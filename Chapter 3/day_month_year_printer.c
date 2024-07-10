#include <stdio.h>
/*
    Basic scanf demonstration where it peeks the next string in a weird way.
    scanf can ask for input from the user that matches what the computer asks for
*/

int main(void)
{
    int day, month, year;

    printf("Enter a date: ");
    scanf("%d/%d/%d",  &month, &day, &year);

    printf("You entered the date: %d/%d/%d", year, month, day);
    
    return 0;
}