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

    printf("$20 bills: %2d\n", amount / TWENTY_DOLLAR_BILL);
    amount = amount % TWENTY_DOLLAR_BILL;
    printf("$10 bills: %2d\n", amount / TEN_DOLLAR_BILL);
    amount = amount % TEN_DOLLAR_BILL;
    printf(" $5 bills: %2d\n", amount / FIVE_DOLLAR_BILL);
    amount = amount % FIVE_DOLLAR_BILL;
    printf(" $1 bills: %2d\n", amount / ONE_DOLLAR_BILL);

    return 0;
}