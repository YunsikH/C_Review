#include <stdio.h>

long power(long x, long n);
long compute_polynomial(long x);

int main(void)
{
    long x, n, result;
    
    printf("Enter a value for x: "); 
    scanf("%li", &x);

    result = compute_polynomial(x);
  
    printf("%li", result);

    return 0;
}

long compute_polynomial(long x)
{
    long result;

    result = (3 * power(x, 5)) + (2 * power(x, 4)) - (5 * power(x, 3)) - (power(x, 2)) + (7 * x) - 6;

    return result;
}

long power(long x, long n)
{
    if (n == 0)
        return 1;  
    else if (n % 2 == 0)
        return power(x, n / 2) * power(x, n / 2);
    else if (n % 2 == 1)
        return x * power(x, n - 1);

}