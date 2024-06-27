/*
    ask the user the amount due
    calculates the number of bills required using the smallest number of bills
    20, 10, 5, 1 dollar bills only
*/
#include <stdio.h>

#define TWENTY_DOLLAR_BILL 20
#define TEN_DOLLAR_BILL 10
#define FIVE_DOLLAR_BILL 5
#define ONE_DOLLAR_BILL 1

int main(void)
{
    int amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    printf("$20 bills: %2d\n", amount / 20);
    amount = amount % 20;
    printf("$10 bills: %2d\n", amount / 10);
    amount = amount % 10;
    printf(" $5 bills: %2d\n", amount / 5);
    amount = amount % 5;
    printf(" $1 bills: %2d\n", amount / 1);

    return 0;
}