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

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int dollars, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %2d\n", twenties);
    printf("$10 bills: %2d\n", tens);
    printf(" $5 bills: %2d\n", fives);
    printf(" $1 bills: %2d\n", ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / TWENTY_DOLLAR_BILL;
    dollars = dollars % TWENTY_DOLLAR_BILL;
    *tens = dollars / TEN_DOLLAR_BILL;
    dollars = dollars % TEN_DOLLAR_BILL;
    *fives = dollars / FIVE_DOLLAR_BILL;
    dollars = dollars % FIVE_DOLLAR_BILL;
    *ones = dollars / ONE_DOLLAR_BILL;
}
