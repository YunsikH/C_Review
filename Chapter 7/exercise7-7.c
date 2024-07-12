//Adds two fractions
#include <stdio.h>

int main(void)
{
    char ch;
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions separated by an arithemtic sign: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &ch, &num2, &denom2);

    if (ch == '+')
    {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The sum is ");
    }
    else if (ch == '-')
    {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The subtraction is ");
    }
    else if (ch == '*')
    {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        printf("The multiplication is ");
    }
    else if (ch == '/')
    {
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
        printf("The division is ");
    }

    printf("%d/%d\n", result_num, result_denom);

    return 0;
}