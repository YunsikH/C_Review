#include <stdio.h>

int main(void)
{
    float loan_amount, int_rate, monthly_payment, monthly_rate, number_of_months, i;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &int_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of monthly payment: ");
    scanf("%f", &number_of_months);

    for (i = 0; i < number_of_months; i++)
    {
        printf("Balance remaining after payment: $%.2f\n", loan_amount -= monthly_payment);
        loan_amount += (loan_amount * (int_rate / 100) / 12);
    }

    return 0;
}