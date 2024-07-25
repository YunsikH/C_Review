#include <stdio.h>

long compute_polynomial(long x);

int main(void)
{
    long x;
    
    printf("Enter a value for x: ");
    scanf("%li", &x);
    
    x = compute_polynomial(x);
    
    printf("%li",x);

    return 0;
}

long compute_polynomial(long x)
{
    long result;

    result = (3 * (x*x*x*x*x)) + (2 * (x*x*x*x)) - (5 * (x*x*x)) - (x * x) + (7 * x) - 6;

    return result;
}