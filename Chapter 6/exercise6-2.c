//Calculate the GCD of two integers
#include <stdio.h>

int main(void)
{
    int m, n, remainder, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    
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

    printf("Greatest common divisor: %d", m);

    return 0;
}