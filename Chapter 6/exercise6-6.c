#include <stdio.h>

int main(void)
{
    int nomber;

    scanf("%d", &nomber);

    for (int i = 1; i < nomber; i++)
    {
        if ( ((i * i) % 2) == 0)
        {
            i = i * i;
            printf("%d\n", i);
        }
    }

    return 0;
}