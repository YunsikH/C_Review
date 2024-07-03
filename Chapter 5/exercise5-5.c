#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Enter amount of taxable income: ");
    scanf("%f", &income);

    if (income <= 750.00)
        tax = income * 0.01;    
    else if (income > 750.00 && income <= 2250.00)
        tax = 7.50 + (income * 0.02);
    else if (income > 2250.00 && income <= 3750.00)
        tax = 37.50 + income * 0.03;
    else if (income > 3750.00 && income <= 5250.00)
        tax = 82.50 + income * 0.04;
    else if (income > 5250.00 && income <= 7000.00)
        tax = 142.50 + income * 0.05;
    else if (income > 7000.00)
        tax = 230.00 + (income * 0.06);

    printf("Tax due: %.2f", tax);

    return 0;
}