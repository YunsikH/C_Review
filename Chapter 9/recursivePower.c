#include <stdio.h>

long power(long x, long n);

int main(void)
{
    long x, n, result;
    
    printf("Enter a value for x and n: ");
    scanf("%li %li", &x, &n);
    
    result = power(x, n);
    
    printf("%li", result);

    return 0;
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