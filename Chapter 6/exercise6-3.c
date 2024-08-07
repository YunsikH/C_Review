//Calculate the GCD of two integers
#include <stdio.h>

int main(void)
{
    int gcd, n, n1, n2, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &n1, &n2);
    gcd = n1;
    n = n2;
    //cheat way
    /*
    for (int i = 1; i <= i1 && i <= i2; ++i)
    {
        if (i1 % i == 0 && i2 % i == 0)
            gcd = i;
    }
    */

    while (n != 0)
    {
            remainder = gcd % n;
            gcd = n;
            n = remainder;
    } 

    printf("In lowest terms: %d/%d %d", n1 / gcd, n2 / gcd, gcd);

    return 0;
}