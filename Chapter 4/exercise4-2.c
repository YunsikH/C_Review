#include <stdio.h>

int main(void)
{
    int nomber, first_digit, second_digit, third_digit;//yes i intentionally called it nomber outta boredom
    
    printf("Enter a three-digit number: ");
    scanf("%d", &nomber);
    first_digit = nomber / 100;
    second_digit = (nomber - (first_digit * 100)) / 10;
    third_digit = nomber % 10;
    
    printf("The reversal is: %d%d%d", third_digit, second_digit, first_digit);

    return 0;
}