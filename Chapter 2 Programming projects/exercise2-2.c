#include <stdio.h>

#define PI 3.141f

int main(void)
{
    float volume, radius = 10.0f;
    printf("Volume is %f", (4.0/3.0 * PI * (radius * radius * radius)));

    return 0;
}