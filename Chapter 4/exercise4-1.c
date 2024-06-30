#include <stdio.h>

int main(void)
{
    int nomber, first_digit, second_digit;//yes i intentionally called it nomber outta boredom
    
    printf("Enter a two-digit number: ");
    scanf("%d", &nomber);
    first_digit = nomber / 10;
    second_digit = nomber % 10;
    
    printf("The reversal is: %d%d", second_digit, first_digit);

    return 0;
}