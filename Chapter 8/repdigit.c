#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        //Finds the remainder 0 - 9 which is the last digit of n exactly
        digit = n % 10;
        
        //if digit is 0 then it is false
        if (digit_seen[digit])//digit does NOT INSERT INTO ELEMENT, it is simply saying if element (digit) is true or flase
        {
            break;
        }
        digit_seen[digit] = true;

        //n divided by 10 then saved to n
        //basically shifts to the next digit in n and removes the decimals
        n /= 10;
    }
    
    if (n > 0)
    {
        printf("Repeated digit\n");
    }
    else
    {
        printf("No repeated Digit\n");
    }

    return 0;
}