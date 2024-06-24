#include <stdio.h>

int main(void)
{
    int knot_speed;

    printf("Enter a wind speed in knots: ");
    scanf("%d", &knot_speed);
    if(knot_speed < 0)
    {
        printf("Calm");
    }
    else if(knot_speed >= 1 && knot_speed <=3 )
    {
        printf("Light Air");        
    }
    else if(knot_speed >= 4 && knot_speed <=27 )
    {
        printf("Breeze");
    }
    else if(knot_speed >= 28 && knot_speed <=47 )
    {
        printf("Gale");
    }
    else if(knot_speed >= 48 && knot_speed <=63 )
    {
        printf("Storm");
    }
    else
    {
        printf("Hurricane");
    }

    return 0;
}