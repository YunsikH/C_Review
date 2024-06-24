#include <stdio.h>

int main(void)
{
    int hand[3][5];

    for (int rank = 0; rank < 3; rank++)
    {
        //hand[rank] = 0;
        for(int suit = 0; suit < 5; suit++)
        {
            //card_exists[rank][suit] = false;
            hand[rank][suit] = 2;
        }
    }

    for (int rank = 0; rank < 3; rank++)
    {
        //hand[rank] = 0;
        for(int suit = 0; suit < 5; suit++)
        {
            printf("%d ", hand[rank][suit]);
        }
        printf("\n");    
    }

    if (hand[2][2])
    {
        printf("yippee");
    }

    int falseity = 0;

    if(falseity)
        printf("uippee");
    

    return 0;
}