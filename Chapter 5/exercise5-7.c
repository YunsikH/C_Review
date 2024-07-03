#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    if (i1 > i2 && i1 > i3 && i1 > i4)
        largest = i1;
    else if (i2 > i1 && i2 > i3 && i2 > i4)
        largest = i2;

    return 0;
}