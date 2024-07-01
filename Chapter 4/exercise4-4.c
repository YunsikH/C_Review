#include <stdio.h>

int main(void)
{
    int number, i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0;

    printf("Enter a number between 0 and 32767: ");
    scanf("%5d", &number);
    i5 = number % 8;
    number /= 8;
    i4 = number % 8;
    number /= 8;
    i3 = number % 8;
    number /= 8;
    i2 = number % 8;
    number /= 8;
    i1 = number % 8;

    printf("In octal, our number is: %d%d%d%d%d", i1, i2, i3, i4, i5);

    return 0;
}