#include <stdio.h>

#define PI 3.141f

int main(void)
{
    float volume, radius;

    printf("Radius of sphere?");
    scanf("%f", &radius);
    printf("Volume is %f", (4.0/3.0 * PI * (radius * radius * radius)));

    return 0;
}