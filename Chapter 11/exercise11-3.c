//Calculate the GCD of two integers
#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int m, n, n1, n2;

    printf("Enter a fraction: ");
    scanf("%d/%d", &n1, &n2);
    m = n1;
    n = n2;
    //cheat way
    /*
    for (int i = 1; i <= i1 && i <= i2; ++i)
    {
        if (i1 % i == 0 && i2 % i == 0)
            gcd = i;
    }
    */
    reduce(n1, n2, &m, &n);

    printf("In lowest terms: %d/%d", n1 / m, n2 / m);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int remainder, gcd;
    
    if (denominator == 0)
        gcd = numerator;
    else
    while (denominator != 0)
    {
            remainder = numerator % denominator;
            numerator = denominator;
            denominator = remainder;
    }
}
