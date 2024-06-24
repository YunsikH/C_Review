#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a Number: ");
    scanf("%d", &number);

    printf("The number %d has ", number);
    if(number == 0)
    {
        printf("0 digits.");
    }
    else if(number >= 0 && number <= 9)
    {
        printf("1 digit.");
    }
    else if (number >= 10 && number <= 19)
    {
        printf("2 digits.");
    }
    
    return 0;
}