#include <stdio.h>

int main(void)
{
    float user_input = 1, biggest;

    while(user_input)
    {
        printf("Enter a number: ");
        scanf("%f", &user_input);

        if (user_input > biggest)
            biggest = user_input;
    }

    printf("The largest number entered was %f", biggest);

    return 0;
}