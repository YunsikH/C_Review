#include <stdio.h>

int main(void)
{
    long x;
    
    printf("Enter a value for x: ");
    scanf("%li", &x);
    x = (3 * (x*x*x*x*x)) + (2 * (x*x*x*x)) - (5 * (x*x*x)) - (x * x) + (7 * x) - 6;
    printf("%li",x);

    return 0;
}