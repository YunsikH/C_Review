#include <stdio.h>

int main(void)
{
    char ch;
    float total, num;

    printf("Enter an expression: ");
    scanf("%f", &total);
    
    while ((ch = getchar()) != '\n')
    {
        switch (ch)
        {
        case '+':
            scanf("%f", &num);
            total += num;
            break;
        case '-':
            scanf("%f", &num);
            total -= num;
            break;
        case '/':
            scanf("%f", &num);
            total /= num;
            break;
        case '*':
            scanf("%f", &num);
            total *= num;
            break; 
        default:
            break;
        }

    }
 
    printf("Value of expression: %.2f", total);

    return 0;
}