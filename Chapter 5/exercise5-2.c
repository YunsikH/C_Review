#include <stdio.h>

int main(void)
{
    int hour, min;
    
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hour, &min);
    
    printf("Equivalent 12-hour time: ");
    
    if (hour == 0)
    {
        printf("12:%d am", min);
    }
    else if(hour >= 12 && hour < 24)
    {
        if(hour != 12)
        {
            hour -= 12;
        }
        printf("%2d:%d pm", hour, min);
    }
    else
    {
        printf("%2d:%d am", hour, min);
    }

    return 0;
}