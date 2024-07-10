//every 24 squares tell the user to press enter to continue
#include <stdio.h>

int main(void)
{
    int i, n, count = 0;
    char ch;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    ch = getchar();

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        //count++;

        if(i % 24 == 0)
        {
            printf("Press Enter to continue...");
            ch = getchar();
        }
    }

    return 0;
}