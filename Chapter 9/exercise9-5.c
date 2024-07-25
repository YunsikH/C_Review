#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void)
{
    int n;

    printf("This program creats a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\n Enter size of magic square: ");
    scanf("%d", &n);

    //variable length arrays can only be declared after the size variable has been initialised 
    int magic_square[n][n];

    create_magic_square(n, magic_square);
    
    //prints magic square
    print_magic_square(n, magic_square);

    return 0;
}

void create_magic_square(int n, int magic_square[n][n])
{ 
    int row_pos, col_pos, i, j;
        
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
}


void print_magic_square(int n, int magic_square[n][n])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", magic_square[j][i]);
        }

        printf("\n");
    }
}