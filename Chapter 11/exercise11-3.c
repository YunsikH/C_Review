//Calculate the GCD of two integers
#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int m, n, n1, n2;

    printf("Enter a fraction: ");
    scanf("%d/%d", &n1, &n2);

    reduce(n1, n2, &m, &n);

    printf("In lowest terms: %d/%d", m, n);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int remainder, gcd = numerator, n = denominator;
    *reduced_numerator = numerator, *reduced_denominator = denominator;
    
    while (n != 0)
    {
        remainder = gcd % n;
        gcd = n;
        n = remainder;
    } 

    *reduced_numerator /= gcd;
    *reduced_denominator /=  gcd;
}
