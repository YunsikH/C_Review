#include <stdio.h>

#define ROW 5
#define COLUMN 5
#define NO_OF_TESTS 5.0f
#define HIGH_SCORE 100

int main(void)
{
    int five_by_five[ROW][COLUMN] = {0}, i, j, totals, high, low, start;

    for (i = 0; i < ROW; i++)
    {
        printf("Student %d: ", i + 1);

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
    printf("\nColumn totals: ");
    
    */
    
    //prints total and average for each student
    for (i = 0; i < ROW; i++)
    {
        printf("Student %d Total and Average Score: ", i + 1);
        totals = 0;
        for (j = 0; j < COLUMN; j++)
        {
            totals += five_by_five[i][j];
        }
        printf("%d %.2f\n", totals, (float) totals / NO_OF_TESTS);
    }

    //prints out stats for each quiz
    for (j = 0; j < COLUMN; j++)
    {
        printf("Quiz %d Average, High, and Low Score: ", j + 1);
        totals = 0;
        high = 0;
        low = HIGH_SCORE;
        
        for (i = 0; i < ROW; i++)
        {
            totals += five_by_five[i][j];
            if (five_by_five[i][j] > high)
                high = five_by_five[i][j];
            
            //low is wrong
            if (five_by_five[i][j] < low)
                low = five_by_five[i][j];
        }

        printf("%.2f %d %d \n", (float) totals / NO_OF_TESTS, high, low);     
    }
    


    return 0;
}