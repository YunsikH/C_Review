#include <stdio.h>

int main(void)
{
    int nomber, i, j;

    scanf("%d", &nomber);

    for (i = 1; i <= nomber; i++)
    {
        for (j = 0; j < i; j++)
        {
            if(j * j == i && i % 2 == 0)
                printf("%d\n", i);
        }
    }

    return 0;
}