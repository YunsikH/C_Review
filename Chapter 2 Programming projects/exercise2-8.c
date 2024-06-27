#include <stdio.h>

int main(void)
{
    float loan_amount, int_rate, monthly_payment;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &int_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    return 0;
}