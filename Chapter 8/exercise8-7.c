#include <stdio.h>

#define ROW 5
#define COLUMN 5

int main(void)
{
    int five_by_five[ROW][COLUMN] = {0}, i, j, totals;

    for (i = 0; i < ROW; i++)
    {
        printf("Enter Row %d: ", i + 1);

        for (j = 0; j < COLUMN; j++)
        {
            scanf("%d", &five_by_five[i][j]);
        }     
    }

    /*
    //debug to check rows and columns are properly initialised
    for (i = 0; i < ROW; i++)
    {
        printf("Row %d: ", i + 1);

        for (j = 0; j < COLUMN; j++)
        {
            printf("%d", five_by_five[i][j]);
        }

        printf("\n");     
    }
    */
    printf("Row totals: ");
    
    for (i = 0; i < ROW; i++)
    {
        totals = 0;

        for (j = 0; j < COLUMN; j++)
        {
            totals += five_by_five[i][j];
        }

        printf("%d ", totals);     
    }

    printf("\nColumn totals: ");
    
    for (j = 0; j < COLUMN; j++)
    {
        totals = 0;

        for (i = 0; i < ROW; i++)
        {
            totals += five_by_five[i][j];
        }

        printf("%d ", totals);     
    }


    return 0;
}