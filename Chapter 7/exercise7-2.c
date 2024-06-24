//every 24 squares tell the user to press enter to continue
#include <stdio.h>

int main(void)
{
    int i, n, count = 2;
    while (count >= 0)
    {
        printf("This program prints a table of squares.\n");
        printf("Enter number of entries in table: ");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            printf("%10d%10d\n", i, i * i);
        }
        count--;
        if(count == 0)
        {
            printf("Press Enter to continue...");
            getchar();
        }
    }


    return 0;
}