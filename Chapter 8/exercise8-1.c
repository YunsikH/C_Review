#include <stdio.h>

int main(void)
{
    int digit, i, run = 1;
    long n;
    
    while(run)
    {
        int digit_count[10] = {0};
        
        printf("Enter a number: ");
        scanf("%ld", &n);

        if(n !=0)
        {
            while(n > 0)
            {
                //Finds the remainder 0 - 9 which is the last digit of n exactly
                digit = n % 10;
                digit_count[digit]++;
                n /= 10;
            }

            printf("Digit:\t\t");
            for(i = 0; i < ((int) (sizeof(digit_count)/sizeof(digit_count[0]))); i++)
            {
                printf(" %d", i);
            }
            printf("\nOccurences:\t");
            for(i = 0; i < ((int) (sizeof(digit_count)/sizeof(digit_count[0]))); i++)
            {
                    printf(" %d", digit_count[i]);
            }
            printf("\n");
        }
        else
            break;
    }

    return 0;
}