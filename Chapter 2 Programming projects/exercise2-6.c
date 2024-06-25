#include <stdio.h>

int main(void)
{
    long x;
    
    printf("Enter a value for x: ");
    scanf("%li", &x);
  
    printf("%li", ((((3 * x + 2) * (x - 5)) * (x - 1)) * (x + 7)) * (x - 6));

    return 0;
}