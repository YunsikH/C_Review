#include <stdio.h>
//horners rules for evaluating polynomials
//currently broken
int main(void)
{
    long x;
    
    printf("Enter a value for x: ");
    scanf("%li", &x);
    x = ((((((((3 * x + 2) * x) - 5) * x) - 1) * x)  + 7) * x) - 6;
    printf("%li", x);

    return 0;
}