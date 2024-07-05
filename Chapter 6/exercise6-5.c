#include <stdio.h>

int main(void)
{
    int nomber, first_digit, second_digit;//yes i intentionally called it nomber outta boredom
    printf("Enter a number: ");
    scanf("%d", &nomber);
    
    printf("The reversal is: ");

    do
    {
        printf("%d", nomber % 10);
        nomber /= 10;
    } 
    while (nomber != 0);
    
    return 0;
}