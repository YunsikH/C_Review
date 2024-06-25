#include <stdio.h>

int main(void)
{
    float money;
    
    printf("Enter a dollars-and-cents amount: ");
    scanf("%f", &money);
    printf("With tax added: %.2f", money * 1.05);

    return 0;
}