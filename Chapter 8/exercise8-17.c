#include <stdio.h>

int main(void)
{
    int n, magic_square[n][n], row_pos, col_pos, i;

    printf("Enter size of magic square");
    scanf("%d", &n);

    row_pos = n / 2;
    col_pos = 0;
    for (i = 1; i <= (n * n); i++)
    {
        magic_square[row_pos][col_pos] = i;

        row_pos++;
        col_pos--;
        if (row_pos == n)
            row_pos = 0;

        if (col_pos < 0)
            col_pos = n - 1;
        
        if (magic_square[row_pos][])
        {
            /* code */
        }
        


    }


    return 0;
}