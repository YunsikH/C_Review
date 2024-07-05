//Calculate the GCD of two integers
#include <stdio.h>

int main(void)
{
    int m, n, n1, n2, remainder, gcd;

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

    if (n == 0)
        gcd = m;
    else
    while (n != 0)
    {
            remainder = m % n;
            m = n;
            n = remainder;
    }

    printf("In lowest terms: %d/%d", n1 / m, n2 / m);

    return 0;
}