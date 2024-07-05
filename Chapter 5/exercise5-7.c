//Note: less if statements can be used
#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    if (i1 > i2 && i1 > i3 && i1 > i4)//i1 is large
    {
        largest = i1;
        if (i2 < i3  && i2 < i4)
            smallest = i2;
        else if (i3 < i2 && i3 < i4)
            smallest = i3;
        else
            smallest = i4;
    }
    else if (i2 > i1 && i2 > i3 && i2 > i4)//i2 is large
    {
        largest = i2;
        if (i1 < i3  && i1 < i4)
            smallest = i1;
        else if (i3 < i1 && i3 < i4)
            smallest = i3;
        else
            smallest = i4;
    }
    else if (i3 > i1 && i3 > i2 && i3 > i4)//i3 is large
    {
        largest = i3;
        if (i1 < i3  && i1 < i4)
            smallest = i1;
        else if (i2 < i1 && i2 < i4)
            smallest = i2;
        else
            smallest = i4;
    }
    else//i4 is large
    {
        largest = i4;
        if (i1 < i2  && i1 < i3)
            smallest = i1;
        else if (i2 < i1 && i2 < i3)
            smallest = i2;
        else
            smallest = i3;
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
    return 0;
}