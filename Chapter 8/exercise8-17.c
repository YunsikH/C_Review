#include <stdio.h>

int main(void)
{
    int n, row_pos, col_pos, i, j;


    printf("This program creats a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\n Enter size of magic square: ");
    scanf("%d", &n);

    int magic_square[n][n];

    //set starting position 
    row_pos = n / 2;
    col_pos = 0;

    //sets all numbers in magicsquare to 0
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            magic_square[j][i] = 0;
        }
    }

    //fills out magic square according to instructions
    for (i = 1; i <= (n * n); i++)
    {
        magic_square[row_pos][col_pos] = i;

        //moves to next position
        row_pos++;
        col_pos--;
        
        //checking to see if magic square is out of bounds 
        if (row_pos == n)
            row_pos = 0;

        if (col_pos < 0)
            col_pos = n - 1;
        
        if (magic_square[row_pos][col_pos] > 0)
        {
            //undos the move to next position
            row_pos--;
            col_pos++;

            if (row_pos < 0)
                row_pos = n - 1;

            if (col_pos == n)
                col_pos = 0;
            //moves it to the proper position if previous position was already filled.
            col_pos++;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", magic_square[j][i]);
        }

        printf("\n");
    }
    /*
    */

    return 0;
}