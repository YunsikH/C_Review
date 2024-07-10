#include <stdio.h>

int main(void)
{
    int to_factor, copy_i, i, j;
    long factorial = 1;
    float constant_e = 1.00f;
    
    
    printf("enter an integer: ");
    scanf("%d", &to_factor);

    for (j = 1; j <= to_factor; j++)
    {
        for (i = 1; i <= j; i++)
        {
            factorial = factorial * i;
        }

        constant_e = constant_e + (1 / factorial);
    }

    printf("%f", constant_e);

    return 0;
}